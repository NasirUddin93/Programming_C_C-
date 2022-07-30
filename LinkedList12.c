#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* one =  malloc(sizeof(struct node));
    struct node* two =  malloc(sizeof(struct node));
    struct node* three =  malloc(sizeof(struct node));

    one->data = 50;
    two->data = 70;
    three->data = 60;

    one->next = two;
    two->next = three;
    three->next = NULL;

    printf("%d\n",one->data);
    printf("%d\n",one->next->data);
    printf("%d\n",one->next->next->data);
}
