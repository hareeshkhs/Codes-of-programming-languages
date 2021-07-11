//data according to line
#include<iostream>
using namespace std;
class  person
{
public:
    int age;
    string name;
};
class prof:public person
{
    public:

        int pub;
        virtual void getdata()
        {
            cin>>name>>age>>pub;
        }
        virtual void putdata(int m)
        {
            cout<<name<<"  "<<age<<"  "<<pub<<"  "<<m;
        }

};
class student:public person
{
public:
    int sub[100],sum=0;
    virtual void getdata()
    {
        cin>>name>>age;
        for(int i=0;i<6;i++)
        {
            cin>>sub[i];
            sum=sum+sub[i];
        }
    }
    virtual void putdata(int k)
    {
        cout<<name<<"  "<<age<<"  "<<sum<<"  "<<k;
    }
};
int main()
{
    prof p1[100];
    student p2[100];
    int i,j,n,val;
    int count=0,temp=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>val;
        if(val==1){
            static int r=1;
           p1[r].getdata();
           count++;
           r++;
        }
        if(val==2){
            static int k=1;
            p2[k].getdata();
            temp++;
            k++;
        }
    }
    for(i=1;i<=count;i++)
    {
        p1[i].putdata(i);
        cout<<endl;
    }
    for(j=1;j<=temp;j++)
    {
        p2[j].putdata(j);
        cout<<endl;
    }
}
//using different 
#include<iostream>
#include<string.h>
using namespace std;
class Person {
public:
    string name;
    int age;
    virtual void getdata() {
        cin >> this->name >> this->age;
    }
    virtual void putdata() {
        cout << this->name << " " << this->age << endl;
    }
};

class Professor : public Person {
public:
    Professor() {
        this->cur_id = ++id;
    }
    int publications;
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata() {
        cout << this->name << " "
            << this->age << " "
            << this->publications << " "
            << this->cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person {
#define NUM_OF_MARKS 6
public:
    Student() {
        this->cur_id = ++id;
    }
    int marks[NUM_OF_MARKS];
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age;
        for (int i=0; i<NUM_OF_MARKS; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        int marksSum = 0;
        for (int i=0; i<NUM_OF_MARKS; i++) {
            marksSum += marks[i];
        }
        cout << this->name << " "
            << this->age << " "
            << marksSum << " "
            << this->cur_id << endl;
    }
};
int Student::id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            per[i] = new Professor;

        }
        else per[i] = new Student;

        per[i]->getdata();

    }

    for(int i=0;i<n;i++)
        per[i]->putdata();

    return 0;

}

