#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int data){
    struct node* node=malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void inOrder(struct node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    printf("  %d",root->data);
    inOrder(root->right);
}
void preOrder(struct node* root){
    if(root == NULL)
        return;
    printf("  %d",root->data);
    inOrder(root->left);
    inOrder(root->right);
}
void postOrder(struct node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    inOrder(root->right);
    printf("  %d",root->data);
}


int main(){
    struct node* root = newNode(100);
    root->left = newNode(1);
    root->left->left = newNode(2);
    root->left->left->left = newNode(4);
    root->left->left->right = newNode(5);
    root->left->right = newNode(3);
    root->left->right->left = newNode(7);
    root->right = newNode(9);
    root->right->left = newNode(10);
    root->right->left->left = newNode(8);
    root->right->right = newNode(11);
    printf("\nInorder:");
    inOrder(root);
    printf("\nPreorder:");
    preOrder(root);
    printf("\nPostorder:");
    postOrder(root);
}
