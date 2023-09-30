#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    struct node *head=NULL;
    struct node*newnode=NULL;
    struct node*temp=NULL;
  //function declaration
    struct node* CreateLinkedList(int);
    void display();
    int CountNodes();
    void Reverse();
     void main(){
        int choice=0;
        printf("Enter the number of nodes: ");
        scanf("%d",&choice);
        if(choice<=0){
            printf("Not valid");
        }
        else{
            printf("Creating linked list");
//creating the linked list
            head=CreateLinkedList(choice);
//print the linked list
            display(head);
            CountNodes();
            Reverse(head);
            display(head);
             }
        getch();
    }


    //creating the linked list
    struct node* CreateLinkedList(int choice){
        int i=0;
    for(i=0;i<choice;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter data: ",i+1);
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
        head=temp=newnode;
    else{
        temp->next=newnode;
        temp=newnode;
    }
    }
    return head;
    }
    //printing the linked list
    void display(struct node *head){
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    }
    //count length
    int CountNodes(){
    int count=0;
     temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
//reverse linked list at specific position
  void Reverse(struct node* temp){
    int pos,c=0;
    printf("\nEnter the number of nodes to be reversed: ");
    scanf("%d",&pos);
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(c<pos && nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
        c++;
    }
    if(c<CountNodes)
        head->next=nextnode;
    head=prevnode;
  }
