#include <stdio.h>

void update(int *a,int *b) {
    int pa=*a+*b;
    printf("%d\n",pa);
    int pb;
    if(*a>*b)
        pb=*a-*b;
    else
        pb=*b-*a;
    printf("%d\n",pb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}
