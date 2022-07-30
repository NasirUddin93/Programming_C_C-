#include<stdio.h>
void bubbleSort(int A[],int arraySize){
    int temp;
    for(int i=0;i<arraySize;i++){
        for(int j=0;j<arraySize;j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1]= temp;
            }
        }
    }
}
void printArray(int A[],int arraySize){
    for(int i=0;i<arraySize;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int A[] = {2,5,6,1,5,6,7,8,2,1,4};
    int arraySize = sizeof(A)/sizeof(A[0]);
    printArray(A,arraySize);
    bubbleSort(A,arraySize);
    printf("\nAfter Buble sort\n");
    printArray(A,arraySize);
}
