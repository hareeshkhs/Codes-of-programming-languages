//Operator Overloading
(1)
#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
    //friend ostream& operator<<(ostream &, const Complex& );
    //friend Complex operator+(Complex ,Complex );
};
ostream& operator<<(ostream &os, const Complex& c)
 {
    cout<<c.a<<'+'<<'i'<<c.b;
    return os;
}
Complex operator+(Complex x,Complex y) {
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
(2)
#include<iostream>
using namespace std;
class Distance
{
public:
    int km,m;
public:
    Distance()
    {
        km=0,m=0;
    }
    void get_data()
    {
        cout<<"\n enter the distance: ";
        cin>>km>>m;
    }
    void show_data()
    {
        cout<<km<<" "<<m<<endl;
    }
    friend Distance  & operator++(Distance &);
    Distance & operator --();
};
Distance & operator++(Distance &d1)
    {
        d1.m++;
        if(d1.m>=1000)
        {
            d1.m=d1.m%10;
            d1.km++;
        }
    }
Distance & Distance :: operator--()
    {
        m--;
        if(m<=0)
        {
            m=m+1000;
            km--;
        }
        return *this;
    }
main()
{
    Distance d1;
    d1.get_data();
    d1.show_data();
    ++d1;
    d1.show_data();
    --d1;
    d1.show_data();
}

