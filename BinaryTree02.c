#include<stdio.h>
struct node{
    int item;
    struct node* left;
    struct node* right;
};
struct node* createNode(int value){
    struct node* newNode =(struct node*)malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}
struct node* insertLeft(struct node* root,int value){
    root->left = createNode(value);
    return root->left;
}
struct node* insertRight(struct node* root,int value){
    root->right = createNode(value);
    return root->right;
}
void inorderTraversal(struct node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    printf("%d->",root->item);
    inorderTraversal(root->right);
}
void preorderTraversal(struct node* root){
    if(root == NULL) return;
    printf("%d->",root->item);
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}
void postorderTraversal(struct node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    printf("%d->",root->item);
}
int main(){
    struct node* root = createNode(1);
    insertLeft(root,2);
    insertRight(root,3);
    insertLeft(root->left,4);
    printf("%d\n",root->item);
    printf("%d\n",root->left->item);
    printf("%d\n",root->right->item);
    printf("%d\n",root->left->left->item);
    printf("Inorder Traversal\n");
    inorderTraversal(root);
    printf("\nPreorder Traversal\n");
    preorderTraversal(root);
    printf("\nPostorder Traversal\n");
    postorderTraversal(root);
}
