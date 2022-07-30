#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head,int new_data){
    struct Node* new_node=NULL;
    new_node = malloc(sizeof(struct Node));
    new_node->data =new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node** head_ref,int new_data){
    struct Node* new_node = NULL;
    new_node = malloc(sizeof(struct Node));
    struct Node* last = head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if(head_ref = NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
        if(last->next == NULL){
            last->next = new_node;
            return;
        }
    }
}
void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;
  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

void printLinklist(struct Node* node){
    while(node !=NULL){
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

    one->data = 5;
    two->data = 6;
    three->data = 7;

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

    printLinklist(head);
    printf("\n");
    insertAtBeginning(&head,9);
    printLinklist(head);
    insertAtEnd(&head,8);
    printf("\n");
    printLinklist(head);
    insertAfter(two,1);
    printf("\n");
    printLinklist(head);
    deleteNode(&head, 7);
    printf("\n");
    printLinklist(head);
}
