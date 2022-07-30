#include<stdio.h>
int main(){
    int number[] = {1,2,3,4,5,6,7,8,9,10,11};
    int searchNumber;
    scanf("%d",&searchNumber);
    int mid;
    int begining = 0;
    int arraySize = sizeof(number)/sizeof(number[0]);
    int end = arraySize;
    while(begining <= end){
        mid =(begining + end)/2;
        if(searchNumber == number[mid]){
           printf("Element is found in index:%d",mid);
        }
        if(searchNumber < number[mid]){
            begining = mid-1;
        }else{
            end = mid + 1;
        }
    }
}
