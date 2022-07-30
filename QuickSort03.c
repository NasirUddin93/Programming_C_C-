#include<stdio.h>
int partition(int A[],int low,int high){
    int pivot,i,j,t;
    pivot = A[high];
    i=low-1;
    for(j=low;j<high;j++){
        if(A[j]<pivot){
            i++;
            t=A[j];
            A[j]=A[i];
            A[i] = t;
        }
    }
    t=A[high];
    A[high] = A[i+1];
    A[i+1] = t;
    return i+1;
}
void quickSort(int A[],int low,int high){
    if(low>=high){
        return;
    }
    int p;
    p=partition(A,low,high);
    quickSort(A,low,p-1);
    quickSort(A,p+1,high);
}
void arrayprint(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(){
    int A[]={6,5,4,3,2,3,4,5,6,7,1};
    int n=sizeof(A)/sizeof(A[0]);
    arrayprint(A,n);
//    printf("%d",n);
    quickSort(A,0,n-1);
    arrayprint(A,n);
}
