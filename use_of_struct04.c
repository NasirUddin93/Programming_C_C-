#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* node=
    (struct node*) malloc(sizeof(struct node));
    node->data = 101;
    node->next = NULL;
    printf("%d",node->data);
}
