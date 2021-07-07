hackerrank 30 days file
********************************************************
day-1:-
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j,k;
    char s2[100];
    double b,a;
    scanf("%d",&j);
    scanf("%lf\n",&b);
    k=j+i;
    a=b+d;
    gets(s2);
    printf("%d\n",k);
    printf("%.1lf\n",a);
    strcat(s,s2);
    puts(s);
    return 0;
}
