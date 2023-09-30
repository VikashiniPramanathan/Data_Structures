#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *root;
struct node *create();
void main(){
    root =0;
    root=create();
}
struct node *create(){
    struct node *newnode;
    int x;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter node(-1 for no node: ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    newnode->data=x;
    printf("\nEnter the left child node: ");
    newnode->left=create();
    printf("\nEnter the right child node: ");
    newnode->right=create();
    return newnode;

}
