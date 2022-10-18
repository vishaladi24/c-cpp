#include<iostream>
using namespace std;

class complx
{
    public:
    double real,
    imag;
    public:
    complx( double real =0. ,double imag=0.);
    complx operator+(const complx&) const;
};

complx::complx(double r, double i)
{
    real = r; imag = i;
}
complx complx::operator+ (const complx& c) const{
    complx result;
    result.real =(this->real +c.real);
    result.imag = (this->imag +c.imag);
    return result;
}
int main()
{
    complx x(4,4);
    complx y(7,6);
    complx z=x+y;
    cout<<z.real<<endl;
    //cout<<z.imag<<endl;

    return 0;
}