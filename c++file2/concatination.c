#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *temp = NULL, *f = NULL, *s = NULL;
struct Node* Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = A[0];
    temp->next = NULL;
    last = temp;
   for (i = 1; i < n; i++)
    {
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    return temp;
}
void print(struct Node *p)
{
    while (p != NULL)
    {
        printf ("%d ", p->data);
        p = p->next;
    }
}
void Concat(struct Node *first, struct Node *second)
{
    struct Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = second;
    second = NULL;
}
int main()
{
    int A[] = { 1, 2, 3, 4 };
    int B[] = { 99, 5, 6, 78 };
    f = Create(A, 4);
    s = Create(B, 4);
   printf ("1st Linked List: ");
    print (f);
   printf ("\n2nd Linked List: ");
    print (s);
   Concat (f, s);
   printf ("\n\nConcantenated Linked List: \n");
    print (f);
    return 0;
}
