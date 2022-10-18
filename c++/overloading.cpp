#include<iostream>
using namespace std;
int function(float )
{
cout<<"data types: float\n";
return 0;
}
int function(int) {
    cout<<"data type: int\n";
    return 0;
}

int function(double) {
     cout<<"data type: double\n";
     return 0;
 }
 
int main()
{
    function(1.0f);
    function(1);
    function(1.0);
    function(1);
    return 0;

}