//conversion of binary and octal
#include <iostream>
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int num;
    cout<<"harish !!!"<<endl;
    cin>>num;
    cout.setf(ios::showpos);
    cout.setf(ios::dec,ios::basefield);
    cout<<num<<endl;
    cout.setf(ios::oct,ios::basefield);
    cout<<num;
    return 0;
}



