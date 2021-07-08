#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",n-j);

        }
        for(k=n;k>i;k--)
        {
            printf("%d",n-i);
        }
        for(j=n-1;j>i;j--)
        {
            printf("%d",n-i);
        }
        int z = n-i+1;
        for(k=0;k<i;k++)
        {
            printf("%d",z+k);
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf("%d",j+1);
        }
        for(k=0;k<i;k++)
        {
            printf("%d",i+2);
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",i+2);
        }
        for(k=n-1,m=0;k>i;k--,m++)
        {
            printf("%d",i+2+m);
        }
        printf("\n");
    }
    return 0;
}
