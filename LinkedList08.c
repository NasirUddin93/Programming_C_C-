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
void printList(struct Node* node){
    while(node != NULL){
        printf("%d ",node->data);
        node = node->next;
    }
}
int main(){
    struct Node* head = NULL;
    struct Node* one = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;
    struct Node* four = NULL;
    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));
    four = malloc(sizeof(struct Node));
    one->data = 10;
    two->data = 20;
    three->data = 30;
    four->data = 40;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    head = one;
    printList(head);
    insertAtBeginning(&head,50);
    printf("\n");
    printList(head);
}
