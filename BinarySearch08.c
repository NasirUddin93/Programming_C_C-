#include<stdio.h>
#include<stdbool.h>
struct Node{
    int item;
    struct Node *left,*right;
};
struct Node* createNewNode(char k){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->item = k;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
bool isFullBinaryTree(struct Node* root){
  if(root == NULL)
        return true;
    if(root->left == NULL && root->right ==NULL)
        return true;
   if((root->left) && (root->right))
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));
    return false;

}
int main(){
    struct Node* root =NULL;
    root = createNewNode(1);
    root->left = createNewNode(2);
    root->right = createNewNode(3);
    root->left->left = createNewNode(4);
    root->left->right = createNewNode(5);
    root->left->right->left = createNewNode(6);
    root->left->right->right = createNewNode(7);
    printf("%d",root->item);
    if(isFullBinaryTree(root))
        printf("Binary Tree is full");
    else
        printf("Binary Tree is not full");
}
