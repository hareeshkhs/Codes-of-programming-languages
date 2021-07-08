#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int, int, int, int);
int find_nth_term(int n, int a, int b, int c) {
    if(n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
  
    return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
  
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
***************************************************************************************************
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int, int, int, int);
int find_nth_term(int n, int a, int b, int c)
{
    int x = a+b+c;
    if (n > 4) {
        x = find_nth_term(--n, b, c, a+b+c);
    }
    return x;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
**************************************************************************************************
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int, int, int, int);
int find_nth_term(int n, int a, int b, int c) 
{
    int x = a + b + c;
    if (n== 4){
        return x;
    }
    return find_nth_term(--n,b,c,x);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

