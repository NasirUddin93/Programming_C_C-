#include<stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
void insert(struct node* root,int data){
    struct node* tempNode = (struct node*)malloc(sizeof(struct node));
    struct node* current;
    struct node* parent;

    tempNode->data = data;
    tempNode->left = NULL;
    tempNode->left = NULL;
    if(root == NULL)
        root = tempNode;
    else{
        current = root;
        parent = NULL;
        while(1){
            parent = current;
            if(data < parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = tempNode;
                    return;
                }
            }else{
                current = current->right;
                if(current==NULL){
                    parent->right = tempNode;
                    return;
                }
            }
        }

    }
}
int main(){
    struct node* root = NULL;
    insert(root,5);
    printf("%d",root->data);
}
