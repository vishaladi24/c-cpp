/*#include<iostream>
using namespace std;
class base1
{
    public:
    float salary=1000;
    
};
class derived: public base1 {
    public:
    void sum(){
        cout<<"your total salary is:"<<(salary);
    }
};
int main()
{
    derived x;
    cout<<"your salary is:"<<x.salary<<endl;
    return 0;
}

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
}*/


#include<iostream>
using namespace std;
class A{
public:
int a=29;
void fun(){
    cout<<"hello"<<a;
}
};
class B: public A
{
public:
void funi(){
    cout<<"\nhi";
}
};
int main(){
B obj;
obj.fun();
obj.funi();
}
