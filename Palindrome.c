#include<stdio.h>
int main(){
    int n=1234,remainder=0,quotient=0,result=0;
    while(n>0){
        remainder = n%10;
        quotient = n/10;
        n=quotient;
        result = result*10 + remainder;
    }
    if(n==result){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}
