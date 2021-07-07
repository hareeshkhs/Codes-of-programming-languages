Book Name:Let Us C
****************************************************************
CHAPTER-2:C INSTRUCTIONS.
EXCERCISE:-
****************************************************************
1.sum of first and last digit.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    int r,p,m;
    scanf("%d", &n);
    p=n%10;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    m=p+r;
    printf("%d\n",m);
    return 0;
}
****************************************************************
2.problem about spliting money into less no of notes.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    int r,p,m,s,k,a,b,c,d,e,f,g,h,i;
    scanf("%d", &m);
    p=m%100;
        r=m%100;
        sum=sum+r;
        m=m/100;
        printf("100's are=%d\n",m);
    n=m%100;
            r=n%50;
            sum=sum+r;
            n=n/50;
            printf("50's are=%d\n",n);
    k=p%50;
    c=k;
            r=k%10;
            sum=sum+r;
            k=k/10;
            printf("10's are=%d\n",k);
    a=c%10;
    e=a;
            r=a%5;
            sum=sum+r;
            a=a/5;
            printf("5's are=%d\n",a);
    d=e%5;
    f=d;
            r=d%2;
            sum=sum+r;
            d=d/2;
            printf("2's are=%d\n",d);
    g=f%2;
    printf("1's are=%d\n",g);
    return 0;
}
**************************************************************

























