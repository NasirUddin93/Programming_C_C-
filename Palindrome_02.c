#include<stdio.h>
int main(){
    int n=0,remainder=0,quotent=0,result=0;
    scanf("%d",&n);
    int temp = n;
    while(n>0){
        remainder = n%10;
        quotent = n/10;
        n=quotent;
        result = result*10 + remainder;
    }
    n = temp;
    printf("n= %d\n",n);
    printf("%d",result);
    if(n==result){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");

    }
}
