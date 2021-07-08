#include <stdio.h>
#include <stdlib.h>

int main()
{
   char line[150];
   int i,j;
   printf("enter a string: \n");
   gets(line);
   for(i=0;line[i]!='\0';i++)
   {
       if(!((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z')||(line[i]=='\0')))
             {
                 for(j=1;line[j]!='\0';j++)
                    {
                        line[j]=line[j+1];

                    }
                    line[j]='\0';
             }
   }
   printf("output string: ");
   puts(line);
    return 0;
}
