#include<stdio.h>
int main(){
	int frames,total,i,j,k,flag,count,max,faults;
	printf("Number of frames: ");
	scanf("%d",&frames);
	printf("Number of Processes: ");
	scanf("%d",&count);
	getchar();
	char arr[frames],pid[count];
	int stime[frames],next[frames];
	for(i=0;i<frames;i++) // Initializing
		{arr[i]='-';next[i]=count+1;stime[i]=-1;}
	for(i=0;i<count;i++){
		printf("PID: ");
		scanf("%c",&pid[i]);
		getchar();
	}
	for(faults=0,i=0;i<count;i++){
		printf("\t%d. \t",i);
		for(j=0;j<frames;j++)
			printf("%c\t",arr[j]);
		printf("\n");
		
		flag=0;
		for(j=0;j<frames;j++){
			if (arr[j]==pid[i])
				{flag=1;break;}
			else if (arr[j]=='-')
				{flag=1;arr[j]=pid[i];faults++;stime[j]=i;break;}
		}
		if (flag)
			continue;
		for(max=0,j=0;j<frames;j++){
			next[j]=count+1;
			for(k=i+1;k<count;k++)
				if (arr[j]==pid[k])
					{next[j]=k;break;}
			if ((next[j]>next[max]) || (next[j]==next[max] && stime[j]<stime[max]))
				max=j;
		}
		arr[max]=pid[i];stime[max]=i;faults++;
	}
	printf("\t%d. \t",i);
		for(j=0;j<frames;j++)
			printf("%c\t",arr[j]);
		printf("\n");
		
	printf("No of Page Faults: %d\n",faults);
	
}
