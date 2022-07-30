#include<stdio.h>
struct Node{
    int data;
    int* next;
};
void printList(struct Node *node){
    while(node != NULL){
        printf("%d",node->data);
        node = node->next;
    }
}
int main(){
    struct Node* first = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));
    first->data = 5;
    second->data = 6;
    third->data = 7;
    first->next = second;
    second->next = third;
    third->next = NULL;
    printList(first);
}
