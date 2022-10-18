#include<iostream>
using namespace std;
class single_base_class{
    public:
    int x,y;
    void data() {
        cout<<"\nEnter the value of x and y->\n";
        cin>>x>>y;
    }
};
class derived1: public single_base_class {
    public:
    void product() {
    cout<<"\nthe product is="<<x*y;
   } 
};
class derived2: public single_base_class {
    public:
    void product() {
     cout<<"\nthe product is"<<x+y;
   } 
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    obj1.data();
    obj2.data();
    return 0;
}
