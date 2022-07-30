#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref; /* used in step 5*/
  new_node->data = new_data;
  new_node->next = NULL;
  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }
  while (last->next != NULL) last = last->next;
  last->next = new_node;
  return;
}
void printList(struct Node* node){
    while(node != NULL){
        printf("%d",node->data);
        node = node->next;
    }
}
int main(){
    struct Node* head;
    struct Node* one = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;

    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));

    one->data = 4;
    two->data = 5;
    three->data = 6;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    printList(head);
    insertAtBeginning(&head, 2);
    printf("\n");
    printList(head);
    insertAtEnd(&head, 1);
    printf("\n");
    printList(head);

}
