#include<stdio.h>
struct adress
{

    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct adress add;
};
void display(struct employee);
void main()
{
  struct employee emp;
  printf("Enter Employee information\n");
  scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin,emp.add.phone);
  display(emp);
}
void display(struct employee emp)
{
    printf("printing the details....\n");
    printf("%s %s %d %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}