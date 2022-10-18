#include<iostream>
using namespace std;
int multiply(int a, int b){
    cout<<"a*b: "<<a*b<<endl;
}
int multiply(int a, double b){
    cout<<"a*b :"<<a*b<<endl;
}
int multiply(double a, int b){
  cout<<"a*b:"<<a*b<<endl;
}
int main(){
    multiply(2,3);
    multiply(3.0, 3);
    return 0;
}