#include<stdio.h>
union unionjob
{
 //deffining union
 char name[64];
 float salary;
 int workerNo;
}j;
int main()
{
    j.salary = 12.3;
    printf("salary= %.1f\n", j.salary);
    j.workerNo = 100;
    printf("salary = %.1f\n", j.salary);
    printf("Numbers of workers = %d", j.workerNo);
    return 0;
}
