#include<iostream>
using namespace std;
void fun()
{
class test1
{
    public:
    void dis1(){
        cout<<"1st class: "<<endl;
    }
};
class test2 :public test1
{
    public:
    void dis2()
    {
        cout<<"2nd class "<<endl;
    }
};
test2 t2;
t2.dis1();
t2.dis2();
}
int main()
{
    fun();
    return 0;
}
