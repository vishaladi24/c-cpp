#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node* right;
};
void inordertraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inordertraversal(root->left);
    printf("%d->",root->data);
    inordertraversal(root->right);
}
void preordertraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d->",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d->",root->data);
}
struct node* creatnode(val)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insertleft(struct node* root, int val) {
  root->left = creatnode(val);
  return root->left;
}
struct node* insertright(struct node* root, int val) {
  root->right = creatnode(val);
  return root->right;
}
int main()
{
    struct node* root=creatnode(1);
    insertleft(root,2);
    insertright(root,3);
    insertleft(root->left,4);
    insertleft(root->left->left,5);
    printf("Inorder traversal\n");
    inordertraversal(root);
    printf("\nPreorder traversal\n");
    preordertraversal(root);
    printf("\nPostorder traversal\n");
    postordertraversal(root);
    return 0;
}