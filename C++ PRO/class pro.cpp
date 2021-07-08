#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
     public:
     char name[20];
     int no ;
     void getdata()
     {
          cout<<"enter name :- ";
          cin>>name;
          cout<<"enter employee no :- ";
          cin>>no;
     }
     void putdata()
     {
          cout<<"\nname of employee is :- "<<name;
          cout<<"\nemployee no is :- "<<no;
     }
}o[100];
int main()
{
     int i,a=1,count=0;

     for(i=0;a==1;i++)
     {

          o[i].getdata();
          cout<<"do you want to enter other data ?if yes enter 1 otherwise 0 :- ";
          cin>>a;
          count++;
     }
     for(i=0;i<count;i++)
     {
          o[i].putdata();
     }
}

