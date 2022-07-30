#include<stdio.h>
int main(){
    int A[5]={3,4,52,3,1,2};
    int *ptr;
    ptr = &A[0];
    printf("%d\n",ptr);
    printf("%d",(ptr+1));
}


