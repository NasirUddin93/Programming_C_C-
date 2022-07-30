#include<stdio.h>
int main(){
    int number[5];
    int sum = 0;
    for(int i=0;i<5;i++){
        scanf("%d",&number[i]);
        sum += number[i];
    }
    printf("Array Elements:\n");
    for(int i=0;i<5;i++){
        printf("%d ",number[i]);
    }
    printf("Sum =%d\n",sum);

}
