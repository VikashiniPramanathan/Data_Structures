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
    struct node* InsertAtLast(struct node *newnode);
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
            InsertAtLast(head);
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
     //inserting node at the last of linked list
    struct node* InsertAtLast(struct node* newnode){
        int data;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter node to insert at last: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;
        printf("\nNode inserted at last successfully");
        return head;
    }
