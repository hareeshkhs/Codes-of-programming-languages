//greatest among four numbers
#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int x,int y,int z,int h)
{
    int m;
    m=((x>y?x:y)>(z>h?z:h)?(x>y?x:y):(z>h?z:h));
    return m;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    return 0;
}
