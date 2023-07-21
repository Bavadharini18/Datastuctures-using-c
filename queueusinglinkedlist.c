#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int value)
{
    struct node*ptr;
    ptr=((struct node*)malloc(sizeof (struct node)));
    ptr->data=value;
    ptr->next=NULL;

    if((front==NULL)&&(rear==NULL)){
        front=rear=ptr;
    }
    else{   
        rear->next=ptr;
        rear=ptr;
    }
    printf("Node is inserted");
    }

    int dequeue(){
        if(front==NULL){
            printf("underflow");
            return-1;
        }
        else{
            struct node*temp=front;
            int tempdata=front->data;
            front=front->next;
            free(temp);
            return tempdata;
        }
    }

void display(){
    struct node*temp;
    if((front==NULL)&&(rear==NULL)){
        printf("queue is empty");
    }
    else{
        printf("The queue is ");
        temp=front;
        while(temp){
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("null");
    }
}

    int main(){
        int choice,value;
        printf("IMPLEMENTATION OF QUEUUE USING LINKED LIST");
        while(choice!=4){
            printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
            printf("enter the choice");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                printf("enter the vakue to be inserted");
                scanf("%d",&value);
                enqueue(value);
                break;

                case 2:
                printf("enter the value to be deleted");
                scanf("%d",&value);
                dequeue(value);
                break;

                case 3:
                display();
                break;

                case 4:
                exit(0);
                break;

                default:
                printf("wrong choice");

            }
        }
    }