#include<iostream>
using namespace std;
namespace first
{
    int x=5;
    int y=10;
}
namespace second
{
    double x=3.12222;
    double y=5.12222;
}
int main(){
    using namespace first;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<second::x<<"\n";
    cout<<second::y<<"\n";
    return 0;
}