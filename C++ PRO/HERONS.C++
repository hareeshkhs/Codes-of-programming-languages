HERONS FORMULA
**********************************************
#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,s,r;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    r=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<r;
    return 0;
}
***********************************************
