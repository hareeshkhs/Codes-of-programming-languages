#include<stdio.h>
int main(){
	int i,j,count,loop,flag,resource,process;
	printf("Number of Resources: ");
	scanf("%d",&resource);
	printf("Number of Processes: ");
	scanf("%d",&process);
	
	int available[resource];
	int completed[process],c_count=0,sequence[process];
	int max[process][resource];
	int allotted[process][resource];
	int need[process][resource];
	
	printf("Available instances: ",resource);
	for(i=0;i<resource;i++)
		scanf("%d",&available[i]);
	
	printf("Maximum required instances\n");
	for(i=0;i<process;i++){
		completed[i]=0;
		printf("For process %d: ",i+1);
		for(j=0;j<resource;j++)
			scanf("%d",&max[i][j]);
	}
		
	printf("Already allotted instances\n");
	for(i=0;i<process;i++){
		printf("For process %d: ",i+1);
		for(j=0;j<resource;j++)
			scanf("%d",&allotted[i][j]);
	}
	
	
	for(i=0;i<process;i++){
		for(j=0;j<resource;j++){
			need[i][j]=max[i][j]-allotted[i][j];
			//printf("%d, ",need[i][j]);
		}
		//printf("\b\n");
	}
	
	do{
		flag=0;
		for(loop=0;loop<process;loop++,i++){
			i=i%process;
			if (completed[i]) // Process already completed
				continue;
			
			count=0;
			for(j=0;j<resource;j++)
				if (need[i][j]>available[j]) // Checking whether need is less than available for all resuorcess
					{count++;break;}
			if (count==0){ // For all resuorces need is less than available
				flag=1;
				sequence[c_count++]=i+1;  // Add process to safe sequence
				completed[i]=1; // Make it as completed
				for(j=0;j<resource;j++)
					{available[j]+=allotted[i][j];}  // Allotted resources to available after compltetion
			}
		}
			
	}while(flag);
	
	if (c_count==process){
		printf("Safe Sequence: ");
		for(i=0;i<c_count-1;i++)
			printf("P%d, ",sequence[i]);
		printf("P%d\n",sequence[i]);
	}
	else
		printf("Safe Sequence not possible.\n");
	
	return 0;
}
