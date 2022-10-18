#include<iostream>
using namespace std;
int main()
{
    int num;
    char str[80];
    cin>>num;
    cin.sync();
    cin.getline(str,80);
    cout<<num<<endl;
    cout<<str;
    return 0;
}