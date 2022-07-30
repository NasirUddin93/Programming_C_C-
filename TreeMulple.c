#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;
};
typedef struct node* myNode;
myNode createNode(int data){
    myNode node =(myNode) malloc(sizeof(struct node));
    node->data = data;
    node->first = NULL;
    node->second = NULL;
    node->third = NULL;
    node->fourth = NULL;
    node->fifth = NULL;
    return (node);
}

int main(){
    myNode root = NULL;
    root = createNode(5);
    printf("%d",root->data);
}
