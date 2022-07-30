#include<stdio.h>
int main(){
    int num;
    num = 6;

    int p;
    p = &num;

    printf("value = %d",num);
    printf("\nAddress= %d",&num);
    printf("\nAddress= %d",p);
    printf("\nvalue= %d",*p);

}
