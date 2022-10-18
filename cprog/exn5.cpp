#include <iostream>
using namespace std;
namespace add
{
    int x;
    int y;
    int val(int x, int y) 
    { return x + y; }
}
namespace sub
{
    int x = 90;
    int y = 20;
    int val() { return x - y; }
}
namespace mul
{
 int x = 9;
 int y = 20;
 int val()
    {
      return x * y;
    }
}
namespace divi
{
   int x = 90;
   int y = 20;
   int val()
    {
     return x / y;
    }
}
int main()

{
    int x, y;
    cin >> x;
    cin >> y;
    cout << add::val(x, y) << "\n";
    cout << mul::val() << "\n";
    cout << sub::val() << "\n";
    cout << divi::val();
    return 0;
}
