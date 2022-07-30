#include<stdio.h>
struct node{
    int item;
    struct node* left;
    struct node* right;
};
struct node* createNode(int value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->left = NULL;
    return (newNode);
}
struct node* insertLeft(struct node* root,int value){
    root->left =createNode(value);
    return root->left;
}
struct node* insertRight(struct node* root,int value){
    root->right =createNode(value);
    return root->right;
}
void inorderTraversal(struct node* root){
   if(root == NULL) return;
   inorderTraversal(root->left);
   printf("%d->",root->item);
   inorderTraversal(root->right);
}

int main(){
    struct node* root = createNode(1);
    printf("%d",root->item);
    insertLeft(root,2);
    insertRight(root,3);
    printf("%d",root->left->item);
    printf("%d",root->right->item);
    inorderTraversal(root);
}
