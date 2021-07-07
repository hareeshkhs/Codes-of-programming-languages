fibonacci series and missing numbers in it
*****************************************************************
#include<stdio.h>
main()
{
    int a=0,b=1,sum,j,count=1,count1=0,num,arr[100]={0,1},i;
    printf("enter no.");
    scanf("%d",&num);
    printf("%d  %d  ",a,b);
    for(i=2;a+b<=num;i++)
    {
        sum=a+b;
        printf("%d  ",sum);
         arr[i]=sum;
         count++;
         a=b;
         b=sum;
    }
    printf("\n");
    for(i=0;i<=num;i++)
    {

        for(j=0;j<=count;j++)
        {
            if(arr[j]==i)
                {
                 count1=count1+1;
                }

        }
        if(count1==0)
            printf("%d  ",i);
        count1=0;


    }


}
