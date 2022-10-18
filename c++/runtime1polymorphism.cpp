#include<iostream>
using namespace std;
class car
{
    public:
    virtual void start()=0;
    virtual void stop()=0;
    int fun()
    {
        cout<<"this is me"<<endl;
        return 0;
    }
};
class innova:public car
{
    public:
    void start()
    {
        cout<<"BMW started"<<endl;
    }
      void stop()
    {
        cout<<"BMW stopped"<<endl;
    }
};
class swift:public car{
     void start()
    {
        cout<<"AUDI started"<<endl;
    }
    void stop()
    {
        cout<<"AUDI stopped"<<endl;
    }
};
int main()
{
    car *c =new innova();
    c->fun();
    c->start();
    c->stop();
    c=new swift();
    c->start();
    c->stop();
    return 0;
}