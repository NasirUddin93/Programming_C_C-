#include<stdio.h>
void taruPrint(int number[],int n){
    printf("Array Elements are:\n");
     for(int i=0;i<n;i++){
        printf("%d ",number[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int number[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int arraySize = sizeof(number)/sizeof(number[3]);
//    printf("%d",arraySize);

    taruPrint(number,arraySize);
}
