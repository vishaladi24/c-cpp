#include<iostream>
using namespace std;
class base1
{
 public:
 float salary = 1000;
};
class base2 {
public:
float bonus =100;
};
class derived: public base1, public base2 {
    public:
    void sum(){
        cout<<"your total salary is:"<<(salary+bonus);
    }
};
int main()
{
    derived x;
    cout<<"your salary is:"<<x.salary<<endl;
    cout<<"your bonous is:"<<x.bonus<<endl;
    x.sum();
    return 0;
}