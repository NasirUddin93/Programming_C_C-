#include<stdio.h>
int linearSearch(int number[],int arraySize,int searchNumber){
    for(int i=0;i<arraySize;i++){
        if(number[i] == searchNumber){
            return i;
        }
    }
    return -1;
}
int main(){
    int number[] = {4,5,6,3,2,4,7,8,4,9};
    int searchNumber = 0;
    printf("Enter a number:\n");
    scanf("%d",&searchNumber);
    int result;
    int arraySize = sizeof(number)/sizeof(number[0]);
    result = linearSearch(number,arraySize,searchNumber);
    (result== -1)?printf("No"):printf("Number is found in index : %d",result);
}
