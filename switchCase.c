#include<stdio.h>
int main(){
    char operatoR;
    double num1,num2;
    printf("Enter operator:\n");
    scanf("%c",&operatoR);
    printf("Enter two numbers:\n");
    scanf("%lf%lf",&num1,&num2);

    switch(operatoR){
        case '+':
        printf("+");
        break;
        case '-':
        printf("-");
        break;
        case '*':
        printf("*");
        break;
        case '/':
        printf("/");
        break;
        default:
        printf("deffault");
   }
}
