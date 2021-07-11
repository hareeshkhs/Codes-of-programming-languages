//function ridding
*****************************************************************
#include <iostream>
using namespace std;
class Parent
{
public:
void print()
{
cout << "The Parent print function was called" << endl;
}
};
class Child : public Parent
{
public:
void print()
{
cout << "The child print function was called" << endl;
} };
int main() {
Parent obj1;
Child obj2 = Child();
obj1.print();
obj2.print();
return 0;
}

