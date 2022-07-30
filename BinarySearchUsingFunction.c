#include<stdio.h>
int binarySearch(int number[],int arraySize,int searchNumber){
    int left,right,mid;
    right = arraySize - 1;
    left = 0;
    while(left<=right){
        mid = (left + right)/2;
        if(number[mid]==searchNumber){
            return mid;
        }
        if(number[mid]<searchNumber){
            left = mid + 1;
        }else{
            right = mid - 1;
       }
    }
    return -1;
}
int main(){
    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = sizeof(number)/sizeof(number[0]);
    int searchNumber = 3;
    scanf("%d",&searchNumber);
    int result = binarySearch(number,arraySize,searchNumber);
    (result==-1)?printf("Number is not found"):printf("Number is found in index:%d",result);
}
