#include<stdio.h>
int main(){
    int left,right,mid;
    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = sizeof(number)/sizeof(number[0]);
    int searchNumber = 3;
    scanf("%d",&searchNumber);
    right = arraySize - 1;
    left = 0;
    while(left<=right){
        mid = (left + right)/2;
        if(number[mid]==searchNumber){
            printf("Number is found in index:%d",mid);
        }
        if(number[mid]<searchNumber){
            left = mid + 1;
        }else{
            right = mid - 1;
       }
    }
}
