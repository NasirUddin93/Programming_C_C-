#include<stdio.h>
int main(){
int number = 0;
printf("Enter a Number:\n");
scanf("%d",&number);
int remainder=0;
int quotent;
int sum=0;
while(number>0){
    remainder = number % 10;
    quotent = number / 10;
    sum += remainder;
//    printf("%d\n",remainder);
//    printf("%d\n",quotent);
    number = quotent;
}
    printf("sum = %d\n",sum);

}
