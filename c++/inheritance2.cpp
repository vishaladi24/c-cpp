#include<iostream>
using namespace std;
class baseclass{
    public:
    void print(){
    cout<<"this is an example of multiple inheritance"<<endl;
    }
};
class derivedclass: public baseclass{};
class derivedclass2: public baseclass{};
int main()
{
derivedclass2 obj;
obj.print();
return 0;
}