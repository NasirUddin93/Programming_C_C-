#include<stdio.h>
int main(){
    int number[] = {6,12,17,23,38,45,77,84,90};
    int search_number = 0;
    printf("Enter a number:\n");
    scanf("%d",&search_number);
    int low=0,high=8,mid=0;
    int found = 0;
    while(low<=high){
        mid = (low+high)/2;
        if(number[mid]==search_number){
            printf("Number is found at index %d",mid);
            found = 1;
        }
        if(number[mid] > search_number){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    if(!found){
        printf("Number is not found in array");
    }
}
