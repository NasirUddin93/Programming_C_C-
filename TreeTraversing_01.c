#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return(newNode);
}
int main(){
    struct node* root= createNode(5);
    printf("%d",root->data);
}
