project:pattern by parv.
***********************************************************
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,p;
    for(i=0;i<6;i++)
    {
        if(i==0)
        {
            for(p=0;p<6;p++)
            {
                printf("*");
            }
        }
        if(i==1)
        {
                for(p=0;p<1;p++)
                    printf("*");
                for(p=0;p<4;p++)
                    printf(" ");
                for(p=0;p<1;p++)
                    printf("*");
        }
        if(i==2)
        {
            for(p=0;p<1;p++)
            {
                printf("* *");
                printf("* *");
            }
        }
        if(i==3)
        {
            for(p=0;p<1;p++)
            {
                printf("* *");
                printf("* *");
            }
        }
        if(i==4)
        {
                for(p=0;p<1;p++)
                    printf("*");
                for(p=0;p<4;p++)
                    printf(" ");
                for(p=0;p<1;p++)
                    printf("*");
        }
        if(i==5)
        {
            for(p=0;p<6;p++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

OUT PUT:-
******
*    *
* ** *
* ** *
*    *
******
THANKS!!!
******************************************************



















