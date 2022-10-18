#include <iostream>
using namespace std;
namespace first
{
    namespace second
    {
        int add(int x, int y) { return x + y; }
    }
    namespace third
    {
        int sub(int x, int y) { return x - y; }
    }
    namespace fourth
    {
        int mul(int x, int y) { return x * y; }
    }
}
int main()
{
    int x, y;
    cout << "enter the no x=";
    cin >> x;
    cout << "enter the no y=";
    cin >> y;
    cout << "add =\n"
         << first::second::add(x, y) << '\n';
    cout << "sub=\n"
         << first::third::sub(x, y) << '\n';
    cout << "mul=\n"
         << first::fourth::mul(x, y) << '\n';
    return 0;
}
