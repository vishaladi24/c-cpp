#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
//Display
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d   ", head->data);
        head = head->link;
    }
    printf("\n");
}
//To insert at end
void InsertAtEnd(struct  node *head, int data){
struct  node *ptr, *temp;
ptr=head;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
while ((ptr->link!=NULL))
{
    ptr=ptr->link;
}
ptr->link=temp;
}
//To find loop
void findloop(struct node *head) {
    struct node *temp, *temp1;
    temp = temp1 = head;
    while(temp && temp1 && temp1->link) {
        /* Slow pointer will move one node per iteration whereas 
        fast node will move two nodes per iteration */
        temp = temp->link;
        temp1  = temp1->link->link;
        if (temp == temp1) {
           printf("Linked List contains a loop\n");
           return;
        }
    }
    printf("No Loop in Linked List\n");
}
int main(){
    struct  node *head=malloc(sizeof(struct  node));//Allocating memory size to node struct.
    head->data=60;//Give data of first node as value of 45
    head->link=NULL;
    InsertAtEnd(head,14);
    InsertAtEnd(head,20);
    InsertAtEnd(head,22);
    display(head);
    findloop(head);
}