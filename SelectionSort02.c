#include<stdio.h>
void selectionSort(int A[],int n){
    int small;
    for(int i=0;i<n;i++){
        small = i;
        for(int j = i+1; j<n;j++){
            if(A[j]<A[small]){
                small = j;
            }
            if(small != i){
                int temp = A[small];
                A[small] = A[i];
                A[i] = temp;
            }
        }
    }
}
void arrayPrint(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(){
    int A[]={6,5,4,3,4,5,6,7,8,9,2,3};
    int n = sizeof(A)/sizeof(A[0]);
    arrayPrint(A,n);
    selectionSort(A,n);
    arrayPrint(A,n);

}
