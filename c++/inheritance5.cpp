#include<iostream>
using namespace std;
class base_class
{
    public:
    int x;
};
class class_1:  virtual public base_class
{
    public:
    int y;
};
class class_2: virtual public base_class
{
    public:
    int z;
    
};
class derived_class: public class_1, public class_2
{
    public:
    int sum;
};
int main()
{
    derived_class obj;
    //obj.x=10;
    obj.x=20;
    obj.x=10;
    obj.y=20;
    obj.z=30;
    obj.sum= obj.x + obj.y + obj.z+obj.x;
    cout<<"The sum is:"<<obj.sum<<"\n\n";
    return 0;
}

