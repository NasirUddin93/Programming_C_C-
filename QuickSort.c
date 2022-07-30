#include<stdio.h>
void swap(int A,int B){
    int temp=0;
    temp = A;
    A = B;
    B = temp;
}
void quickSort(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(A[i]<= pivot);
        do{

        }while(A[j]>=pivot);
        if(i<j){
            swap(A[i],A[j]);
        }
    }
            swap(A[i],A[j]);
            return j;
}
int main(){
    int A[] = {10,16,8,12,15,6,3,9,5};
    quickSort(A,0,8);
    for(int i=0;i<9;i++){
        printf("%d ,",A[i]);
    }

}
