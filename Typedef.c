#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
int main(){
    node *one=NULL;
    one = (struct Node*)malloc(sizeof(struct Node));
    one->data = 7;
    one->next = NULL;
    printf("%d",one->data);

}

