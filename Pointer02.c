#include<stdio.h>
void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){
    int num1=50,num2=90;
    swap(&num1,&num2);
    printf("%d\n",num1);
    printf("%d\n",num2);
}
