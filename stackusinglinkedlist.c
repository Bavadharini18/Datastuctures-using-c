#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
}*root=NULL;

void create(){
    struct node *newnode;
    int n;
   
    do {
        scanf("%d",&n);
        if(n < 0) break;
        
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = n;
        newnode->left = NULL;
        newnode->right = NULL;
    
        if(root == NULL) {
            root = newnode;
        }
        else {
            struct node *current = root;
            while(1) {
                if(n <= current->data) {
                    if(current->left == NULL) {
                        current->left = newnode;
                        break;
                    }
                    else {
                        current = current->left;
                    }
                }
                else {
                    if(current->right == NULL) {
                        current->right = newnode;
                        break;
                    }
                    else {
                        current = current->right;
                    }
                }
            }
        }
    } while(n >= 0);
}

void inorder(struct node *node){
    if(node == NULL) return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
}

void postorder(struct node *node){
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    printf("%d ",node->data);
    printf("\n");
}

void preorder(struct node *node){
    if(node == NULL) return;
    printf("%d ",node->data);
    preorder(node->left);
    preorder(node->right);
        printf("\n");

}

int main(){
    create();
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}