#include<stdio.h>
void selectionSort(int A[],int n){
    int i,j,min;
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(A[min]>A[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }

}
int main(){
    int A[] = {23,27,25,22,26};
    selectionSort(A,5);
        for(int i=0;i<5;i++){
        printf("%d\n",A[i]);
    }
}
