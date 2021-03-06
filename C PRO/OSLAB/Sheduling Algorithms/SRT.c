#include<stdio.h>
struct process_node{
	int pid; // Process Id
	int atime; // Arrival Time
	int etime; // Execution Time
	int rtime; // Remaining Time
	int ftime; // Final TIme
};
int main(){
	int count,ind,jnd,time=0,completed=0,last,min_pid=-1,min_rtime,wtime,ttime;
	float mttime;
	printf("Enter number of processes: ");
	scanf("%d",&count);
	struct process_node arr[count],temp;
	for(ind=0;ind<count;ind++){
		arr[ind].pid=ind+1;
		printf("P%d ETime and ATime: ",arr[ind].pid);
		scanf("%d %d",&arr[ind].etime,&arr[ind].atime);
		arr[ind].rtime=arr[ind].etime;
	}
	for(ind=0;ind<count;ind++)
	for(jnd=1;jnd<count;jnd++)
		if (arr[jnd-1].atime>arr[jnd].atime){
			temp=arr[jnd-1];
			arr[jnd-1]=arr[jnd];
			arr[jnd]=temp;
	
	}		
	
	printf("PID\tAT\tET\tFT\tWT\tTAT\tMTAT\n");

	while(completed<count){
		last=min_pid;
		min_rtime=10000000;min_pid=-1;
		for(ind=0;ind<count;ind++){
			if (ind==last)
				continue;
			if (arr[ind].rtime>0 && arr[ind].atime<=time && arr[ind].rtime<min_rtime){
				min_pid=ind;
				min_rtime=arr[ind].rtime;
			}
		}
		// Equal resource allocation
		if (last!=-1 && arr[last].rtime>0 && arr[last].atime<=time && arr[last].rtime<min_rtime){
				min_pid=last;
				min_rtime=arr[last].rtime;
		}
		if (min_pid==-1)
			{time++;continue;}
		
		ind=min_pid;
		arr[ind].rtime-=1;
		time++;
		arr[ind].ftime=time;
		
		printf("P%d\t%d\t%d/%d",arr[ind].pid,arr[ind].atime,arr[ind].etime-arr[ind].rtime,arr[ind].etime);
		if (arr[ind].rtime==0){
			completed++;
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
