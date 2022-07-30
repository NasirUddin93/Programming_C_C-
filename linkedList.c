#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node Node;


Node *create_node(int item,Node *next){
    Node *new_node = (Node *) malloc(sizeof(Node));
    printf("Error! Could Not create a new\n");
    exit(1);
}
new_node->data = item;
new_node->next = next;
return new_node;


int main(){
Node *n;
n = create_node(1,null);
printf("Data=%d/n",n->data);
return 0;

}
