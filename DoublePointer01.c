#include<stdio.h>
int main(){
    int var = 586;
    int* ptr1;
    ptr1 = &var;
    int** ptr2;
    ptr2 = &ptr1;

    printf("\n%d",var);
    printf("\n%d",&var);
    printf("\n%d",ptr1);
    printf("\n%d",*ptr1);
    printf("\n%d",ptr2);
    printf("\n%d",**ptr2);

//    printf("\n%d",ptr2);
//    printf("\n%d",&ptr2);
//
//    printf("\n%d",sizeof(ptr1));

}
