#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head_ref,int new_data){
    struct Node* new_node = NULL;
    new_node = malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
printList(struct Node* node){
    while(node !=NULL){
        printf("%d",node->data);
        node = node->next;
    }
}
int main(){

    struct Node* head=NULL;
    struct Node* one=NULL;
    struct Node* two=NULL;
    struct Node* three=NULL;

    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));

    one->data = 5;
    two->data = 6;
    three->data = 7;

    one->next =  two;
    two->next =  three;
    three->next =  NULL;

    head = one;
    printList(head);
    insertAtBeginning(&head,9);
    printf("\n");
    printList(head);
}
