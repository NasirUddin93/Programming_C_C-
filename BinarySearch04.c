#include<stdio.h>
#include<stdbool.h>
int main(){
    int number[] = {6,12,17,23,38,45,77,84,90};
    int search,low=0,high=8,mid;
    scanf("%d",&search);
    bool found= false;
    while(low<=high){
        mid = (low+high)/2;
        if(search == number[mid]){
            printf("%d is found at the index = %d",number[mid],mid);
            found = true;
        }
        if(search < number[mid]){
          high = mid-1;
        }else{
            low = mid +1;
        }
    }
    if(!found){
        printf("No found");
    }
}
