#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
//void printList(struct node* node) {
//  while (node != NULL) {
//  printf("%d",node->data);
//  node = node->next;
//  }
//}
void printList(struct node* node){
    while(node != NULL){
        printf("%d",node->data);
        node = node->next;
    }
}
int main(){
       struct node *head;
       struct node *one = NULL;
       struct node *two = NULL;
       struct node *three = NULL;

       one = malloc(sizeof(struct node));
       two = malloc(sizeof(struct node));
       three = malloc(sizeof(struct node));

       one->data = 4;
       two->data = 5;
       three->data = 6;

       one->next = two;
       two->next = three;
       three->next = NULL;

       head = one;
       printList(head);

}
