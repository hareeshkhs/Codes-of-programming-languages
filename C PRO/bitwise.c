#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int, int);
int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

void calculate_the_maximum(int n, int k)
{
    int a,b,c=0;
    static int and=0,or=0,xor=0;
    for(a=1;a<n;a++)
    {
        for(b=a+1;b<=n;b++)
        {
           c=a&b;
           if(c<k)
             {
               if(c>and){
                  and=c;
               }
             }
            c=a|b;
            if(c<k)
             {
               if(c>or){
                  or=c;
               }
             }
             c=a^b;
             if(c<k)
             {
               if(c>xor){
                  xor=c;
               }
             }
         }
     }
    printf("%d\n%d\n%d\n",and,or,xor);
  return 0;
}

