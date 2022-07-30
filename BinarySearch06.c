#include<stdio.h>
int main(){
    int A[] = {1,2,2,3,4,5,5,6,6,7,8,9};
    int low=0,mid,high=11;
    int search=0;
    printf("Enter your search Number:\n");
    scanf("%d",&search);
    while(low<=high){
        mid = (low+high)/2;
        if(A[mid] == search){
            printf("Yes:%d",mid);
        }
        if(A[mid] > search){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }

}
