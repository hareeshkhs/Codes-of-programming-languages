#include<stdio.h>
int main(){
	int frames,total,i,j,time,flag,count,max,faults;
	printf("Number of frames: ");
	scanf("%d",&frames);
	printf("Number of Processes: ");
	scanf("%d",&count);
	getchar();
	char arr[frames],pid;
	int stime[frames];
	
	for(i=0;i<frames;i++) // Initializing
		{arr[i]='X';stime[i]=-1;}
	
	time=0;faults=0;
	for(i=0;i<count;i++){
		flag=1;
		printf("PID: ");
		scanf("%c",&pid);
		getchar();
		max=0;
		for(j=0;j<frames;j++){
			if (arr[j]==pid)
				break;
			if (arr[j]=='X'){
				max=j;
				break;
			}
			if (stime[max]>stime[j])
				max=j;
		}
		if (j==frames || arr[j]!=pid){
			arr[max]=pid;
			stime[max]=time++;
			faults++;
		}
		printf("\t\t");
		for(j=0;j<frames;j++)
			printf("%c\t",arr[j]);
		printf("\n");
	}
	printf("No of Page Faults: %d\n",faults);
	
}
