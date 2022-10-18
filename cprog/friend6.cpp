#include<iostream>
using namespace std;
class A {
    public:
    int f() { }
};
class B {
    friend int A::f();

};
int main()
{
    A x;
    x.f();
    return 0;
}