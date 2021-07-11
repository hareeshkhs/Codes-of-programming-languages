prime number using classes and objects
***********************************************************
#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class prime
{
   public:
       int i,n,m,flag=0;
       void get()
       {
           cin>>n;
       }
       void display()
       {
           m=n/2;
           for(i=2;i<=m;i++)
           {
               if(n%i==0)
               {
                   cout<<n<<"number is not prime."<<endl;
                   flag=1;
                   break;
               }
               if(flag==0)
               {
                   cout<<n<<"number is  prime."<<endl;
               }
           }
};
int main(void)
{
      prime p1;
      p1.get();
      p1.display();
}
********************************************************************************
