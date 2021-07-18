#include<stdio.h>
#include<stdlib.h>
#define snode struct node
snode{
	int pos,jid,size,type;
	snode *next,*prev;
};
int main(){
	int jobs,msize,i,jid,jsize,choice,flag;
	printf("MainMemory Size: ");
	scanf("%d",&msize);
	printf("Menu\n\t1. Insert Job\n\t2. Delete Job\n\t3. Current Jobs\n\t0. Exit\n");
	snode *start=(snode*)malloc(sizeof(snode)),*temp,*new;
	start->type=0;
	start->pos=0;
	start->size=msize;
	start->next=start->prev=NULL;
	do{
		printf("Choice: ");
		scanf("%d",&choice);
		
		if (choice==1){
				printf("Job ID: ");
				scanf("%d",&jid);
				printf("Job Size: ");
				scanf("%d",&jsize);
				for(new=NULL,temp=start;temp!=NULL;temp=temp->next)
					if (temp->type==0 && temp->size>=jsize)
						if (new==NULL || temp->size<=new->size)
							new=temp;
				temp=new;		
				if (temp!=NULL){
					if (temp->size>jsize){
						new=(snode*)malloc(sizeof(snode));
						new->type=0;
						new->pos=temp->pos+jsize;
						new->size=temp->size-jsize;
						new->next=temp->next;
						new->prev=temp;
						temp->next=new;
					}
					temp->type=1;
					temp->jid=jid;
					temp->size=jsize;
							
					printf("Job%d is inserted at %d\n",jid,temp->pos);
				}
				else
					printf("Sorry no avaiable space in Memory\n");
		}
		else if (choice==2){
			printf("Job ID: ");
			scanf("%d",&jid);
			for(flag=1,temp=start;temp!=NULL;temp=temp->next){
				if (temp->type==1 && temp->jid==jid){
					temp->type=0;
					if (temp->prev!=NULL && temp->prev->type==0){
						temp->prev->size=temp->prev->size+temp->size;
						temp->prev->next=temp->next;
						temp=temp->prev;
						if (temp->next!=NULL)
							temp->next->prev=temp;
					}
					if (temp->next!=NULL && temp->next->type==0){
						temp->size=temp->size+temp->next->size;
						temp->next=temp->next->next;
						if (temp->next!=NULL)
							temp->next->prev=temp;
					}
					printf("Job%d is deleted\n",jid);
					flag=0;
					
					break;
				}
			}
			if (flag)
				printf("Sorry Job%d not found\n",jid);
		}
		else if (choice==3){
			printf("Start\tSize\tType\tJobID\n");
			for(temp=start;temp!=NULL;temp=temp->next){
				printf("%d\t%d\t",temp->pos,temp->size);
				if (temp->type)
					printf("Job\t%d\n",temp->jid);
				else
					printf("Free\t-\n");
			}
		}
		else if (choice==0){
			printf("Thank You !\n");
			
		}
		else
			printf("Enter Valid Input !\n");
	}while(choice);
	
}
