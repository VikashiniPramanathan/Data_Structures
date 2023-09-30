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
    printf("\nPre order is: ");
    preorder(root);
    printf("\nIn order is: ");
    inorder(root);
    printf("\nPost order is: ");
    postorder(root);
}
struct node *create(){
    struct node *newnode;
    int x;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter node(-1 for no node): ");
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
void preorder(struct node *root){
    if(root==0)
        return ;
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);

}
void inorder(struct node *root){
    if(root==0)
        return ;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void postorder(struct node *root){
    if(root==0)
        return ;
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}
