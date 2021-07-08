#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        {
        scanf("%d", arr + i);
        }
    for(i=num-1,j=0;i>=0;i--,j++)
        {
           *(arr+j)=*(arr+i);
        }
    for(i = 0; i < num; i++) {
        *(arr+i)=
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
