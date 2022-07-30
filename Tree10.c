#include<stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* node = malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main(){
    struct node* root=malloc(sizeof(struct node));
    root->data = 5;
    root->left = createNode(6);
    root->left->left = createNode(10);
    root->left->left->left = createNode(15);
    root->left->right = createNode(13);
    root->right = createNode(7);
    root->right->left = createNode(28);
    root->right->right = createNode(27);
//    printf("%d\n",root->data);
//    printf("%d\n",root->left->data);
//    printf("%d\n",root->left->left->data);
//    printf("%d\n",root->left->left->left->data);
//    printf("%d\n",root->left->right->data);
//    printf("%d\n",root->right);
    printf("%d\n",root->data);
    printf("%d\n",root->right->data);
    printf("%d\n",root->right->left->data);
    printf("%d\n",root->right->right->data);


}
