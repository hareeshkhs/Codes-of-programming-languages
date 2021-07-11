
#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int arr[100][100],i,j,n,lbr=0,lbc=0,z;
    cout<<"enter n value: ";
    cin>>n;
    cout<<"enter the value of matrix: "<<endl;
    for(i=0;i<n;i++);
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"entered matrix is: "<<endl;
    for(i=0;i<n;i++);
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cin>>i>>j;
    z=1000+4*(n*(i-lbr)+(j-lbc));
    cout<<arr[i][j]<<endl;
    cout<<z;
    return 0;
}
