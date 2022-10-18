#include<iostream>
using namespace std;
class A {
    private:
    class B { };
    B*Z;

    class C:private B {
        private:
        B y;
        C*X;
    };
};
int main()
{
    A::B;
}