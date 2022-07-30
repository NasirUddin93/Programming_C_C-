#include<stdio.h>

void arrayScan(int A[],int n){
    printf("Enter %d elements of array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
}
void arrayDisplayElement(int A[],int arraySize){
    printf("Array Elements are:\n");
    for(int i=0;i<arraySize;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int n;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    int A[n];

    arrayScan(A,n);
    int arraySize = sizeof(A)/sizeof(A[0]);
    arrayDisplayElement(A,arraySize);
}
