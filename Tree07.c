#include<stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    printf("%d\n",root->data);
    printf("%d\n",root->left);
    printf("%d\n",root->right);

}
