#include<stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}
int inorderTraversing(struct node* root){
    if(root == NULL) return;
    inorderTraversing(root->left);
    printf("%d, ",root->data);
    inorderTraversing(root->right);
}
int preorderTraversing(struct node* root){
    if(root == NULL) return;
    printf("%d, ",root->data);
    preorderTraversing(root->left);
    preorderTraversing(root->right);
}
int postorderTraversing(struct node* root){
    if(root == NULL) return;
    postorderTraversing(root->left);
    postorderTraversing(root->right);
    printf("%d, ",root->data);
}
int main(){
    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->left->left = createNode(8);
    root->left->left->right = createNode(9);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(11);
    root->right->left->left = createNode(12);
    root->right->left->right = createNode(13);
    root->right->right->left = createNode(14);
    root->right->right->right = createNode(15);
    root->left->left->left->left = createNode(16);
    root->left->left->left->right = createNode(17);
    root->left->left->right->left = createNode(18);
    root->left->left->right->right = createNode(19);
    root->left->right->left->left = createNode(20);
    root->left->right->left->right = createNode(21);
    root->left->right->right->left = createNode(22);
    root->left->right->right->right = createNode(23);
    root->right->left->left->left = createNode(24);
    root->right->left->left->right = createNode(25);
    root->right->left->right->left = createNode(26);
    root->right->left->right->right = createNode(27);
    root->right->right->left->left = createNode(28);
    root->right->right->left->right = createNode(29);
    root->right->right->right->left = createNode(30);
    root->right->right->right->right = createNode(31);
    printf("Inorder : \n");
    inorderTraversing(root);
    printf("\nPrerrder:\n");
    preorderTraversing(root);
    printf("\nPostorder:\n");
    postorderTraversing(root);
}
