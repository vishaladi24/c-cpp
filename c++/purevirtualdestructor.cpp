#include<iostream>
using namespace std;
class base
{
  public:
   base()
    {
        cout<<"Base class"<<endl;
    }
   virtual ~base() = 0;
};

base::~base()
{
   cout<<"Base Class exited"<<endl;
}
class derieved : public base

{
    public:
   derieved()
    {
        cout<<"Derieved Class"<<endl;
    }
    ~ derieved()
    {
        cout<<"Derieved Class exited"<<endl;



    }



};



int main()



{



    base *p = new derieved();



    delete p;



}