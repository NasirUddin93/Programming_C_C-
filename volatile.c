#include<stdio.h>
int main(){
    volatile int a;
    a++;
    printf("%d",a);
}
