#include<iostream>
using namespace std;
class base_class
{
    public:
    int x;
};
class class_1: protected base_class
{
    protected:
    int y;
};
class class_2: private base_class
{
    private:
    int z;
};
class derived_class: protected class_1, private class_2
{
    private:
    int sum;
};
int main()
{
    derived_class obj;
    obj.class_1::x=10;
    obj.y=20;
    obj.z=30;
    cout<<"The sum is:"<<obj.sum<<"\n\n";
    return 0;
}

