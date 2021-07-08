#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b;
    char s1[100],s2[100];
    printf("enter a string: \n");
    scanf("%s",s1);

    while(1){
        printf("enter your choice\n");
        printf("1.string length\n2.string copy\n3.string concatenation\n");
        scanf("%d",&a);

    switch(a)
    {
      case 1:
       {
          b=strlen(s1);
          printf("string len:%d\n",b);
          break;
       }
       case 2:
       {
           printf("enter sec string: \n");
          scanf("%s",s2);
          strcat(s1,s2);
          printf("%s\n",s2);
          break;

       }
       case 3:
       {
           strcpy(s2,s1);
           printf("%s\n",s2);
          break;
       }
       case 4:
        return 0;
       default:
        {
            printf("choice is invalid\n");
        }
    }

  } return 0;
}
