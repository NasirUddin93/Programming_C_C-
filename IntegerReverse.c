#include<stdio.h>
int main(){
    int num = 1234;
    int remainder;
    int quotient;
    while(num != 0){
        remainder = num % 10;
        quotient = num / 10;
        printf("%d",remainder);
//        printf("%d",quotient);
        num = quotient;
    }
}
