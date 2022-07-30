#include<stdio.h>
int main(){
    int num = 0;
    scanf("%d",&num);
    int vagshesh = 0;
    int vagfol = 0;
    while(num != 0){
        vagshesh = num % 10;
        vagfol = num /10;
        printf("%d",vagshesh);
        num = vagfol;
    }
}
