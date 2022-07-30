#include<stdio.h>
int main(){
    int number[] = {6,12,17,23,38,45,77,84,90};
    int search=0;
    scanf("%d",&search);
    int arraySize;
    arraySize = sizeof(number)/sizeof(number[0]);
//    printf("%d",arraySize);
    int low=0;
    int high = arraySize-1;
    int mid=0;

    while(low<=high){
        mid = (low+high)/2;
    //    printf("%d",mid);
        if(number[mid] == search){
            printf("ok");

        }
        if(number[mid]>search){
//            printf("small");
            high = mid - 1;

        }else{
//            printf("large");
            low = mid + 1;
        }

    }
}
