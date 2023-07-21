#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*head=NULL,*temp,*newnode,*nextnode,*tail;

void create(){
    int n;
    printf("Enter Size :");
    scanf("%d",&n);
    printf("Enter %d Data : ",n);
    for(int i=0;i<n;i++){
    newnode=(struct node*) malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
        tail=NULL;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        tail=newnode;
    }
    }
}

void display(){
     temp=head;
     while (temp!=NULL)
     {
        printf("%d ",temp->data);
        temp=temp->next;
     }  
}

void insertfront(){

    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter newnode data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertmid(){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int pos;
    printf("Enter the position :");
    scanf("%d",&pos);
    printf("Enter Data :");
    scanf("%d",&newnode->data);
    temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    temp->prev->next=newnode;
    newnode->prev=temp->prev;
    newnode->next=temp;
    temp->prev=nextnode;
    
}

void insertend()
{
    struct node*newnode =(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void delfront(){
{
temp=head;
head=head->next;
temp->next=NULL;
display();
}
}

void delmid()
{
    int i,pos;
    printf("Enter Posttion to Delete :");
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
    temp=temp->next;
    temp->next=temp->next->next;
    display();
}

void delend()
{
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    display();

}

int main(){
    int option;
    while(1){
        printf("\n\n");
        printf("1-Create\n");
        printf("2-Display\n");
        printf("3-Insert at Frond\n");
        printf("4-Insert at Mid\n");
        printf("5-Insert at end\n");
        printf("6-Delete at Front\n");
        printf("7-Delete at mid\n");
        printf("8-Delete at end\n");
        printf("9-exit");
        printf("\nEnter your option :");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            create();
            break;
        case 2:  
            display();
            break;
        case 3:
            insertfront();
            break;
        case 4:
        {
            insertmid();
            break;
        }
        case 5:
        {
            insertend();
            break;
        }
        case 6:
        {
            delfront();
            break;
        }
        case 7:
        {
            delmid();
            break;
        }
        case 8:
        {
            delend();
            break;
        }
        case 9:{
            exit (0);
        }
}
    }
}