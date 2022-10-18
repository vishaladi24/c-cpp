#include<stdio.h>
union unionjob
{
 //deffining union
 char name[64];
 float salary;
 int workerNo;
}ujob;
struct structjob
{
    char name[32];
    float salary;
    int workerno;
}sjob;
int main()
{
    printf("size of union =%d bytes\n", sizeof(ujob));
    printf("size of structure =%d bytes", sizeof(sjob));
    return 0;
}

