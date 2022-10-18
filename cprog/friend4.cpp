#include<iostream>
using namespace std;
class classB;
class classA {
    public:
    classA(): numA(12) {}
    private:
    int numA=40;
    friend int add(classA, classB);
};
class classB {
    public:
    classB(): numB(12) {}
    private:
    int numB=20;
    friend int add(classA, classB);
};
int add(classA objectA, classB objectB) {
    return(objectA.numA+objectB.numB);
}
int main()
{
    classA objectA;
    classB objectB;
    cout<<"sum:"<<add(objectA, objectB);
    return 0;
}