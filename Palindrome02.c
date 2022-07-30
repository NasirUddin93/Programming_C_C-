#include<stdio.h>
int main(){
    int num=0;
    printf("Enter an integer number:\n");
    scanf("%d",&num);
    int beforeRever = num;
    int remainder=0,quotient=0,reverse=0;
    while(num>0){
        remainder = num % 10;
        quotient = num / 10;
        reverse = (reverse*10) + remainder;
        num = quotient;
    }
    if(reverse == beforeRever){
        printf("Yes");

    }else{
        printf("No");

    }

}
