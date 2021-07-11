//program to print before 9 in name and after 9 are in even&odd.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    
    for(int n=a; n<=b;n++)
    {
        if(n<=9)
            cout << num[n-1] << endl;
        else
            if(n%2==0)
                cout << "even\n";
            else
                cout << "odd\n";
    }
    return 0;
}
