#include<iostream>
using namespace std;
namespace first
{
    int x;
    int y;
   int val() {return x+y;}
}
namespace second
{
    double x;
    double y;
    double val() {return x*y;}
}
int main()
{
    {
        using namespace first;
        cout<<"first number"<<"\n";
        cin>>x;
        cout<<"second number"<<"\n";
        cin>>y;
        cout<<val()<<"\n";
    }
    { 
    using namespace second;
        cout<<"first number"<<"\n";
        cin>>x;
        cout<<"second number"<<"\n";
        cin>>y;
        cout<<val();
    }
    return 0;
}