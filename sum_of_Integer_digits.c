#include<stdio.h>
int main(){
    int num = 0;
    printf("Enter a integer:\n");
    scanf("%d",&num);
    int remainder=0,quotient=0;
    int sum = 0;
    while(num > 0){
        remainder = num %10;
        quotient = num /10;
        sum += remainder;
        num = quotient;
    }
    printf("%d",sum);
}
