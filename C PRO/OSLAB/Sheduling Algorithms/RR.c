#include<stdio.h>
struct process_node{
	int pid; // Process Id
	int atime; // Arrival Time
	int etime; // Execution Time
	int rtime; // Remaining Time
	int ftime; // Final Time
};
int main(){
	int count,ind,jnd,time=0,wtime,ttime,tquant,etime,completed;
	float mttime;
	printf("Enter number of processes: ");
	scanf("%d",&count);
	printf("Enter Time Quantum: ");
	scanf("%d",&tquant);
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
	printf("Execution Order: \n");
	printf("PID\tAT\tET\tFT\tWT\tTAT\tMTAT\n");
	completed=0;
	while(completed<count){
		jnd=1;
		for(ind=0;ind<count;ind++)
		if (time>=arr[ind].atime && arr[ind].rtime>0)
		{
			jnd=0;
			etime=arr[ind].rtime;
			if (etime>tquant)
				etime=tquant;
			arr[ind].rtime-=etime;
			time+=etime;		
			arr[ind].ftime=time;
			
			// Printing		
			printf("P%d\t%d\t%d/%d",arr[ind].pid,arr[ind].atime,arr[ind].etime-arr[ind].rtime,arr[ind].etime);
			if (arr[ind].rtime==0){
				wtime=arr[ind].ftime-(arr[ind].atime+arr[ind].etime);
				ttime=arr[ind].ftime-arr[ind].atime;
				mttime=(float)ttime/arr[ind].etime;
				printf("\t%d\t%d\t%d\t%.2f",arr[ind].ftime,wtime,ttime,mttime);
				completed++;
			}
			printf("\n");
		}
		if (jnd)
			time++;
	}
	printf("Total Execution Time: %d\n",time);
	return 0;	
}
