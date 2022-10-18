/*#include<stdio.h>
void insertedAtEnd(struct node *start,int data)
{
    struct node *p,*temp;
    temp==(struct node *)malloc (sizeof(struct node));
    temp->info=data;
    p=start;
    while(p->link!=NULL)
    p=p->link;
    p->link=temp;
    temp->link=NULL;
}*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
int data;
struct Node* next;
}Node;
void reverseUtil(Node* curr, Node* prev, Node** head);
void reverse(Node** head)
{
if (!head)
  return;
reverseUtil(*head, NULL, head);
}
void reverseUtil(Node* curr, Node* prev, Node** head)
{
if (!curr->next) {
  *head = curr;
   curr->next = prev;
  return;
}
Node* next = curr->next;
curr->next = prev;
reverseUtil(next, curr, head);
}
// A utility function to create a new node
Node* newNode(int key)
{
Node* temp = (Node *)malloc(sizeof(Node));
temp->data = key;
temp->next = NULL;
return temp;
}

void printlist(Node* head)
{
while (head != NULL) {
  printf("%d ",head->data);
  head = head->next;
}
printf("\n");
}
// Driver code
int main()
{
Node* head1 = newNode(1);
head1->next = newNode(2);
head1->next->next = newNode(3);
head1->next->next->next = newNode(4);
head1->next->next->next->next = newNode(5);
head1->next->next->next->next->next = newNode(6);
head1->next->next->next->next->next->next = newNode(7);
head1->next->next->next->next->next->next->next = newNode(8);
printf("Given linked list\n");
printlist(head1);
reverse(&head1);
printf("\nReversed linked list\n");
printlist(head1);
return 0;
}