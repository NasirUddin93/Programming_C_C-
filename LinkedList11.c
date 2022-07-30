#include<stdio.h>
struct node{
    int data;
    int data1;
    struct node *nextAddress;
};
insertAtBeginning(struct node** head_ref,int new_data){
    struct node* new_node=NULL;
    new_node = malloc(sizeof(struct node));
    new_node->data= new_data;
    new_node->nextAddress = (*head_ref);
    (*head_ref)=new_node;
}
void printLinkedList(struct node *head){
    while(head != NULL){
        printf("%d ",head->data);
        head = head->nextAddress;
    }
    printf("\n");
}
int main(){
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    first->data = 50;
    first->data1 = 55;
    second->data = 60;
    third->data = 70;

    first->nextAddress = second;
    second->nextAddress = third;
    third->nextAddress = NULL;

    printLinkedList(first);
    insertAtBeginning(&first,5);
    printLinkedList(first);
}
