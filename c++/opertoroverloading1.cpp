#include<iostream>
using namespace std;
class overload
{
    private:
    int a,b;
    public:
    overload():a(0),b(0){}
    void In()
    {
        
        cout<<"Enter the first number";
        cin>>a;
        cout<<"Enter the second number";
        cin>>b;
    }
    void operator--()
    {
        a=--a;
        b=--b;
    }
    void out()
    {
        cout<<"The decremented elements of the object"<<a<<b;

    }

};
int main()
{
    overload obj;
    obj.In();
    --obj;
    obj.out();
    return 0;
}