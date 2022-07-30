#include<stdio.h>
int main(){
    int i =10;
    printf("%d",i);
    int *p = &i;
    printf("\n%d",&i);
    printf("\n%d",*p);
    printf("\n%d",p);
}
