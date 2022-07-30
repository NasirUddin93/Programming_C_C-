#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main(){
    struct node* root =(struct node*) malloc(sizeof(struct node));
    root->data = 5;
    root->left = newNode(6);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(9);

    printf("%d\n",root->data);
    printf("%d\n",root->right->data);
    printf("%d\n",root->left->data);
    printf("%d\n",root->left->left->data);
    printf("%d\n",root->left->right->data);

}
