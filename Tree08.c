#include<stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data){
    struct node* node =(struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
struct node* insertLeft(struct node* root,int value){
    root->left=newNode(value);
    return root->left;
}
struct node* insertRight(struct node* root,int value){
    root->right = newNode(value);
    return root->right;
}
void inorderTraversal(struct node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    printf("->%d",root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(struct node* root){
    if(root == NULL) return;
    printf("->%d",root->data);
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}
void postorderTraversal(struct node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    printf("->%d",root->data);
}
int main(){
    struct node* root = newNode(1);
    insertLeft(root,2);
    insertRight(root,3);
    insertLeft(root->left,4);
    printf("\nInorder Traversing");
    inorderTraversal(root);
    printf("\nPreorder Traversing");
    preorderTraversal(root);
    printf("\nPostorder Traversing");
    postorderTraversal(root);
}
