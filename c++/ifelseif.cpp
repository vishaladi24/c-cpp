#include<iostream>
using namespace std;
int main()
{
    int a=45,b=52,c=15;
    if(a+b>20)
    {
      cout<<"yes"<<a+b<<endl;
    }
    else if (b+c>20)
    {
        cout<<"yes hai"<<b+c<<endl;
    }
    else if(a+c>20)
    {
    cout<<"yes d "<<a+c<<endl;
    }
    else{
        cout<<"nahi hai "<<endl;
    }
    return 0;
}