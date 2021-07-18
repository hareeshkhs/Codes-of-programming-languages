#include<stdio.h>
struct process_node{
	int pid; // Process Id
	int atime; // Arrival Time
	int etime; // Execution Time
	int rtime; // Remaining Time
	int ftime; // Final TIme
	int pri; // Priority
};
int main(){
	int count,ind,jnd,time=0,completed=0,min_pid,min_pri,wtime,ttime,type;
	float mttime;
	printf("Number of processes: ");
	scanf("%d",&count);
	printf("Is it preemptive (1/0) : ");
	scanf("%d",&type);
	struct process_node arr[count],temp;
	for(ind=0;ind<count;ind++){
		arr[ind].pid=ind+1;
		printf("P%d ETime and ATime and Pripority: ",arr[ind].pid);
		scanf("%d %d %d",&arr[ind].etime,&arr[ind].atime,&arr[ind].pri);
		arr[ind].rtime=arr[ind].etime;
	}
	for(ind=0;ind<count;ind++)
	for(jnd=1;jnd<count;jnd++)
		if (arr[jnd-1].pri<arr[jnd].pri){
			temp=arr[jnd-1];
			arr[jnd-1]=arr[jnd];
			arr[jnd]=temp;
	
	}		
	
	printf("PID\tAT\tET\tPri\tFT\tWT\tTAT\tMTAT\n");

	while(completed<count){
		min_pri=10000000;min_pid=-1;
		for(ind=0;ind<count;ind++){
			if (arr[ind].rtime>0 && arr[ind].atime<=time && arr[ind].pri<min_pri){
				min_pid=ind;
				min_pri=arr[ind].pri;
			}
		}
		if (min_pid==-1)
			{time++;continue;}
		ind=min_pid;
		if (type){
			arr[ind].rtime-=1;
			time++;
		}
		else{
			time+=arr[ind].rtime;
			arr[ind].rtime=0;
		}
		printf("P%d\t%d\t%d/%d\t%d",arr[ind].pid,arr[ind].atime,arr[ind].etime-arr[ind].rtime,arr[ind].etime,arr[ind].pri);
		if (arr[ind].rtime==0){
			completed++;
			arr[ind].ftime=time;
			wtime=arr[ind].ftime-(arr[ind].atime+arr[ind].etime);
			ttime=arr[ind].ftime-arr[ind].atime;
			mttime=(float)ttime/arr[ind].etime;
			printf("\t%d\t%d\t%d\t%.2f",arr[ind].ftime,wtime,ttime,mttime);
		}
		printf("\n");
	}

	
	printf("Total Execution Time: %d\n",time);
	return 0;	
}
