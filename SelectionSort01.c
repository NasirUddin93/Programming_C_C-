#include<stdio.h>
void selectionSort(int A[],int n){
    int i,j,small;
    for(i=0;i<n-1;i++){
        small = i;
        for(j=i+1;j<n-1;j++){
            if(A[j] < A[small]){
                small = j;
                int temp = A[small];
                A[small] = A[i];
                A[i] = temp;
            }
        }
    }
}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int A[] = {6,5,4,3,2,6,7,8,9,3};
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A,n);
    selectionSort(A,n);
    printf("\n");
    printArray(A,n);

}
