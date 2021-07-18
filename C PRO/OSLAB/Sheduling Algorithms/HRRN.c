#include<stdio.h>
struct process_node{
	int pid; // Process Id
	int atime; // Arrival Time
	int etime; // Execution Time
	int rtime; // Remaining Time
	int ftime; // Final TIme
};
int main(){
	int count,ind,jnd,time=0,max_pid,wtime,ttime,completed=0;
	float mttime,hrrn,max_hrrn;
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
	if (count){ // Default First Process
		ind=0;
		time+=arr[ind].rtime;
		arr[ind].rtime=0;
		arr[ind].ftime=time;
		completed++;
		printf("P%d\t%d\t%d/%d",arr[ind].pid,arr[ind].atime,arr[ind].etime-arr[ind].rtime,arr[ind].etime);
		wtime=arr[ind].ftime-(arr[ind].atime+arr[ind].etime);
		ttime=arr[ind].ftime-arr[ind].atime;
		mttime=(float)ttime/arr[ind].etime;
		printf("\t%d\t%d\t%d\t%.2f",arr[ind].ftime,wtime,ttime,mttime);
		printf("\n");
	}
	
	
	while(completed<count){
		max_hrrn=-1;max_pid=-1;
		for(ind=0;ind<count;ind++){
			hrrn=((float)(time-arr[ind].atime)+arr[ind].etime)/arr[ind].etime;
			if (arr[ind].rtime>0 && arr[ind].atime<=time && hrrn>max_hrrn){
				max_pid=ind;
				max_hrrn=hrrn;
			}
		}
		if (max_pid==-1)
			{time++;continue;}
		ind=max_pid;
		time+=arr[ind].rtime;		
		arr[ind].rtime=0;
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
