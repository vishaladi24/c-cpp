#include<iostream>
using namespace std;
class classB;
class classA{
    private:
    int numA=50;
    friend class classB;
    public:
    classA():numA(12) {}
};
class classB {
    private:
    int numB=40;
    public:
  classB() : numB(1) {}

int add() {
    classA objectA;
    return objectA.numA+numB;
}
};
int main()
{
    classB objectB;
    cout<<"sum:"<<objectB.add();
    return 0;
}