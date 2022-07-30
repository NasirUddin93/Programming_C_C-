#include<stdio.h>
int add(int num1,int num2){
    int result;
    result = num1 + num2;
    return result;
}
int main(){
    int sum = add(7,9);
    printf("%d",sum);
}
