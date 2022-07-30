#include<iostream>
using namespace std;
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
    return(newNode);
}
void inorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    printf("%d, ",root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d, ",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d, ",root->data);
}


int main(){
    struct node* root= createNode(5);
    root->left= createNode(7);
    root->right= createNode(9);
    root->right->left= createNode(12);
    root->right->right= createNode(14);
    root->left->left= createNode(10);
    root->left->right= createNode(11);
    inorderTraversal(root);
    printf("\n");
    preorderTraversal(root);
    printf("\n");
    postorderTraversal(root);

}
