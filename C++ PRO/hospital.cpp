//patients details in a hospital
#include <iostream>
using namespace std;
class hospital
{
    public:
    char name[20],disease[20];
    int doa,dod;
    struct date
    {
        int y;
        int m;
        int d;
    }ob,ob1;
    void get()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the date of admsn"<<endl;
        cin>>ob.y>>ob.m>>ob.d;
        cout<<"enter the disease"<<endl;
        cin>>disease;
        cout<<"enter the date of discharge"<<endl;
        cin>>ob1.y>>ob1.m>>ob1.d;
    }
    void put()
      {
            cout<<"name:"<<name<<endl;
            cout<<"d o a:"<<ob.y<<":"<<ob.m<<":"<<ob.d<<endl;
            cout<<"disease:"<<disease<<endl;
            cout<<"d o d:"<<ob1.y<<":"<<ob1.m<<":"<<ob1.d<<endl;
      }
};
class age: public hospital
{
    public:
    int a;
    void get1()
    {
        cout<<"enter the age"<<endl;
        cin>>a;
    }
    void patriatic()
    {
        if(a<12)
        {
            cout<<"below 12 is patriatic"<<endl;
        }
        else
            cout<<"eligible to major"<<endl;
    }
};
int main()
{
    age A[1000];
    int n;
    cout<<"enter n value:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter information about "<<i+1<<" patient"<<endl;
        A[i].get();
        A[i].get1();
    }
    cout<<"OUT PUT!!!"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"information about "<<i+1<<" patient"<<endl;
        A[i].put();
        A[i].patriatic();
    }
    return 0;
}
