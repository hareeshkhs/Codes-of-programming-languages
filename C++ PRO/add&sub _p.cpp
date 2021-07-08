//adding and substaction using pointers in positive
#include <stdio.h>
#include<iostream>
using namespace std;
void update(int *a,int *b) {
    int m,n;
    int *pm=&m,*pn=&n;
    *pm=*a+*b;
    if(*a>*b)
        *pn=*a-*b;
    else
        *pn=*b-*a;
    cout<<*pm<<endl<<*pn;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    return 0;
}

