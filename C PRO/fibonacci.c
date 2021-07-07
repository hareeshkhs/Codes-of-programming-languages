fibonacci series without recursion.
*************************************************
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,n1=0,n2=1,n3;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n%d%d",n1,n2);
    for(i=0;i<n-2;i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
*************************************************
fibonacci series with recursion.
*************************************************
#include<stdio.h>
#include<stdlib.h>
void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);
  return 0;
 }

