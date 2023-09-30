#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void main(){
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
    peek();
}
void push(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    //printf("\nElement pushed successfully!!");
}
void display(){
    printf("\n");
   struct node *temp;
   temp=top;
   if(top==NULL)
    printf("\nStack is empty");
   else{
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
   }
}
void pop(){
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
    printf("\nPoped element is: ");
}
void peek(){
    printf("\nTop element is: %d",top->data);
}
