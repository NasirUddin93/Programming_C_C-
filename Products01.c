#include<stdio.h>
int main(){
    int n;
    int till;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Enter a number of products:\n");
    scanf("%d",&till);
    for(int i=1;i<=till;i++){
        printf("%d, ",n*i);
    }
}
