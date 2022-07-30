#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
void dispayLinkedElements(struct node *p){
    while(p !=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 23;
    two->data = 56;
    three->data = 97;

    one->next =two;
    two->next =three;
    three->next =NULL;

    dispayLinkedElements(one);

}
