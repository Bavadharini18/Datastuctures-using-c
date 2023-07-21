#include <stdio.h>
#include <stdlib.h>

//stack & linked list is used

struct node
{
    int data;
    struct node*next;
}*ptr,*top,*temp;

int main()
{
    int size;
    printf("Enter the size of the list ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(top==NULL){
            top=ptr;
        }
        else{
            ptr->next=top;
            top=ptr;
        }
    }
    int lengthList=0;
    temp=top;
    while(temp!=NULL){
        lengthList++;
        temp=temp->next;
    }
    temp=top;
    int middleElement=(lengthList/2)+1;
    int count=0;
    while(temp!=NULL)
{
count++;
        if(count+1==middleElement){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}