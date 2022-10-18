#include<iostream>
using namespace std;
void f()
{
    class local
    {
        int f();
        int g()
        {
            return 0;
        }
       // static int a;    // error , stati
        int b;
    };
}
int main()
{
    return 0;
}