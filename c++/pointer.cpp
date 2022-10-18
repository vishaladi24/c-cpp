#include<iostream>
using namespace std;
int main()
{
    int var=5;
    int* pointvar;
    pointvar=&var;
    cout<<"var="<<var<<endl;
    cout<<"*pointvar ="<<*pointvar<<endl
    <<endl;
    cout<<"changing value of *pointer to 16:"<<endl;
    *pointvar=16;
    cout<<"var="<<var<<endl;
    cout<<"*pointvar="<<*pointvar<<endl;
    return 0;
}