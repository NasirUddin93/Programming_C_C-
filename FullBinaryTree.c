#include<stdio.h>
#include<stdbool.h>
struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};
struct node* createNewNode(char k){
    struct Node* node =(struct Node*) malloc(sizeof(struct Node));
    node->left = NULL;
    node->right = NULL;
    node->data = k;
    return (node);
}
bool isFullBinaryTree(struct Node* root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    if((root->left) && (root->right)){
        return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
    }
    return false;
}
int main(){
    struct Node* root = NULL;
    root = createNewNode('A');
    root->left = createNewNode('B');
    root->left->left = createNewNode('D');
    root->left->right = createNewNode('E');
    root->left->right->left = createNewNode('H');
    root->left->right->right = createNewNode('I');
    root->right = createNewNode('C');
    root->right->left = createNewNode('F');
//    root->right->right = createNewNode('G');
    if(isFullBinaryTree(root)){
        printf("Binary Tree is Full");
    }else{
        printf("Binary Tree is not Full");
    }
    return 0;
}
