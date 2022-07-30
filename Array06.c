#include<stdio.h>
int main(){
    int number[7];
    printf("Enter Array Elements:\n");
    for(int i=0;i<7;i++){
        scanf("%d",&number[i]);
    }
    printf("Array Elements are:\n");
    for(int i=0;i<7;i++){
            printf("%d, ",number[i]);
    }
}
