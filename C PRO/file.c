//program using files
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;
    int num,i;
    printf("contents of data file");
    f1=fopen("DATA","w");
    for(i=1;i<=30;i++)
    {
        scanf("%d",&num);
        if(num==0)
            break;
        putw(num,f1);
    }
    fclose(f1);
    f1=fopen("DATA","r");
    f2=fopen("ODD","w");
    f3=fopen("EVEN","w");
    while((num=getw(f1))!=EOF)
    {
        if(num%2==0)
          putw(num,f3);
        else
            putw(num,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2=fopen("ODD","r");
    f3=fopen("EVEN","r");
    printf("contents of odd file\n");
    while((num=getw(f2))!=EOF)
      printf("%4d\n",num);
      printf("contents of odd file\n");
      while((num=getw(f3))!=EOF)
        printf("%4d\n",num);
      fclose(f2);
      fclose(f3);
}
