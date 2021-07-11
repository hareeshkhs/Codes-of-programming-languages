#include<iostream>
using namespace std;
main()
{
    int a=0,b=1,sum,j,count=1,count1=0,num,arr[100]={0,1},i;
    cout<<"enter no.";
    cin>>num;
    cout<<a<<" "<<b;
    for(i=2;a+b<=num;i++)
    {
        sum=a+b;
        cout<<" "<<sum;
         arr[i]=sum;
         count++;
         a=b;
         b=sum;
    }
    cout<<"\n";
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
            cout<<i<<" ";
        count1=0;


    }


}
