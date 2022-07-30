#include<stdio.h>
int main(){
    int temp;
    int A[] = {2,3,1,2,3,45,6,56,7,5};
    for(int j =0;j<10;j++){
        for(int i=0;i<10;i++){
            if(A[i]>A[i+1]){
             temp = A[i];
             A[i] = A[i+1];
             A[i+1] = temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d, ",A[i]);
    }
}
