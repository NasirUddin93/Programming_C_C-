#include<stdio.h>
void selectionSort(int A[],int n){
    int i,j,min;

    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        if(min !=i){
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
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
    int A[] = {5,4,3,2,5,6,7,8,1,4};
    int n = sizeof(A)/sizeof(A[0]);
    arrayPrint(A,n);
    selectionSort(A,n);
    arrayPrint(A,n);

}
