#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int num1,num2;
    printf("Enter two integer values:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int result = add(num1,num2);
    printf("sum = %d\n",result);
}
