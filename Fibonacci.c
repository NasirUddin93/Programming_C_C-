#include<stdio.h>
int main(){
    int previousNum = 0;
    int currentNum = 1;
    int sum = 0;
    int i=0;
    printf("%d\n%d\n",previousNum,currentNum);
    do{
        sum = previousNum + currentNum;
        printf("%d\n",sum);
        previousNum = currentNum;
        currentNum = sum;
        i++;
    }while(i<10);
}
