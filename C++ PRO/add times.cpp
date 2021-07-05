/* add two times*/
#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		void get()
		{
			cin>>hr>>min>>sec;
		}
		void disp()
		{
			cout<<hr<<":"<<min<<":"<<sec;
			
		}
		void sum(time,time);
};
void time::sum(time t1,time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	time t1,t2,t3;
	cout<<"Enter 1st time:";
	t1.get();
	cout<<"Enter 2nd time:";
	t2.get();
	cout<<"The 1st time is";
	t1.disp();
	cout<<"\nThe 2nd time is";
	t2.disp();
	t3.sum(t1,t2);
	cout<<"\nThe resultant time is";
	t3.disp();
	
}
**************************************************************************
 #include<iostream.h>  
 #include<conio.h>  
 class time  
 {  
 public:  
 time()  
 {  
 hr=0;  
 min=0;  
 sec=0;  
 }  
 int hr,min,sec;  
 void read()  
 {  
 cout<<"Hours=";  
 cin>>hr;  
 cout<<"\nMinutes=";  
 cin>>min;  
 cout<<"\nSeconds=";  
 cin>>sec;  
 }  
 time operator +(time t2)  
 {  
 time t3;  
 t3.sec=sec+t2.sec;  
 if(t3.sec>60)  
 {  
 t2.min+=1;  
 t3.sec-=60;  
 }  
 t3.min=min+t2.min;  
 if(t3.min>60)  
 {  
 t2.hr+=1;  
 t3.min-=60;  
 }  
 t3.hr=hr+t2.hr;  
 return t3;  
 }  
 void display()  
 {  
 if(hr>=24)  
 { hr=hr%24;  
 }  
 if(hr<10)  
 { cout<<"0"<<hr;  
 }  
 else  
      cout<<hr;  
 if(min<10)  
 { cout<<":0"<<min;  
 }  
 else  
      cout<<":"<<min;  
 if(sec<10)  
 { cout<<":0"<<sec;  
 }  
 else  
      cout<<":"<<sec;  
 }  
 };  
 void main()  
 {  
 clrscr();  
 time c1,c2,c3;  
 cout<<"\n\nEnter the First Time\n\n";  
 c1.read();  
 cout<<"\n\nEnter the Second Time\n\n";  
 c2.read();  
 c3=c1+c2;  
 cout<<"\n\nFirst Time  \t\t";  
 c1.display();  
 cout<<"\n\nSecond Time  \t\t";  
 c2.display();  
 cout<<"\n\nAfter addition,the time is ";  
 c3.display();  
 getch();  
 }  

