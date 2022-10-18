#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};
class derived:public base{
    public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    }
   virtual ~derived()
    {
        cout<<"derived class destructor"<<endl;
    }
};
int main()
{
    base *p = new derived();
    delete p;
    return 0;
}
