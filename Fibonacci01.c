#include<stdio.h>
int main(){
    int previousNum = 0;
    int currentNum = 1;
    int sum;
    int i = 0;
    printf("%d %d ",previousNum,currentNum);
    do{
        sum = currentNum + previousNum;
        printf("%d ",sum);
        previousNum =currentNum;
        currentNum = sum;
        i++;
    }while(i<10);
}
