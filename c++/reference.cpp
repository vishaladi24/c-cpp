#include<iostream>
//using namespace std;
void byvalue_age_in_5_years(int age)
{
    age+=5;
    std::cout<<"Age in 5 years:"<<age<<std::endl;
}
int main()
{
    int age =95;
    byvalue_age_in_5_years(age);
    std::cout<<"current age:" <<age;
}