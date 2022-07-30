#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int remainder;
    int quotient;
    int count=0;
    while(num != 0){
        if(count < 3){
            remainder = num % 10;
            quotient = num / 10;
            printf("%d",remainder);
            num = quotient;
        }else{
            printf("%d",quotient);
            num = 0;
        }
        count++;
    }
}
