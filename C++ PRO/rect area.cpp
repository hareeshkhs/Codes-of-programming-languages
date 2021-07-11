area of rectangle using paramised constructor.
************************************************************
#include <iostream>
using namespace std;
class rectangle
{
    public:
    int l,b;
    float result;
    rectangle(int i,int j)
    {
        l =i;
        b =j;
   }

    void display()
    {
         result = l*b;
    cout<<"Area of Rectangle :  "<<result;
    }

};
int main(void)
{

int x,y;
cout<<"Enter two number";
cin>>x>>y;
    rectangle s=rectangle(x,y);

    s.display();
    return 0;
}
**************************************************************
//using default constructor
#include <iostream>
#include<math.h>
using namespace std;

class  area
{
    public:
    int l,b,r;
    area()
    {
        cin>>l>>b;
    }
    void display()
    {
        r=l*b;
        cout<<r;
    }
};
int main()
{
    area a1;
    a1.display();
    return 0;
}
