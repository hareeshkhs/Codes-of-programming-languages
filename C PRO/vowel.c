#include <stdio.h>
#include <stdlib.h>

int main()
{
 //int i,n,a,b=0;
 char ch;
 printf("enter the charcter to check:\n");
 scanf("%c",&ch);
 switch(ch)
 {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
     printf("%c is a vowel.\n",ch);
     break;
     default:
     printf("%c is not a vowel.\n",ch);
 }
 return 0;

}
