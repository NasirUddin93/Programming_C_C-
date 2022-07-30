#include<stdio.h>
int reverseNumber(int num){
    int remainder=0,quotient=0;
    int result = 0;
    while(num > 0){
        remainder = num %10;
        quotient = num /10;
        result =(result * 10) + remainder;
        num = quotient;
    }
    return result;
}
void print(int reverse){
    printf("%d",reverse);
}
int main(){
    int num = 0,reverse;
    printf("Enter a integer:\n");
    scanf("%d",&num);
    reverse=reverseNumber(num);
    print(reverse);
}
