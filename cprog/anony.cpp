#include <iostream>
using namespace std;
typedef class
{
    int value;

public:
    void setData(int i)
    {
        this->value = i;
    }
    void printvalues()
    {
        cout << "Value =" << this->value << endl;
    }

} myclass;
int main()
{
    myclass obj1, obj2;
    obj1.setData(10);
    obj1.printvalues();
    obj2.setData(20);
    obj2.printvalues();
}
