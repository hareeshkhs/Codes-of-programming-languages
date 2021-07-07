#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a[1001];
    int c;
    int* num = (int*) malloc(10 * sizeof(int));
    scanf("%s",a);
    for(int i = 0 ;i <= strlen(a);i++)
    {
        if(a[i] > 0)
        {
            c = a[i]-'0';
            num[c]=num[c]+1;
        }
    }
    for(int i = 0; i<10;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
