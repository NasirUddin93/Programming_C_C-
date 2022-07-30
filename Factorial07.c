#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1; //= return 0;
    }
    n *=factorial(n-1);
    return n;
}
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("%d",factorial(n));
}
