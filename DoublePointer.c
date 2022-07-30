#include<stdio.h>
int main(){
    int var = 7878;
    int *ptr1;
    int **ptr2;
    ptr1 = &var;
    ptr2 = &ptr1;
    printf("%d\n",var);
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);

}
