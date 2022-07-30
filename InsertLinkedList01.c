#include<stdio.h>
struct Node{
    int data;
    struct node *next;
};
void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}
int main(){
    struct Node* head = NULL;
    insertAtBeginning(&head,4);
    printList(head);
}
