#include <iostream>
using namespace std;
class
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
} obj1;
int main()
{
    obj1.setData(10);
    obj1.printvalues();
}