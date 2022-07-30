#include<stdio.h>
void merge(int A[],int left,int mid,int right){
    int i;
    int index_a,index_l,index_r;
    int size_left,size_right;
    size_left = mid - left +1;
    size_right = mid - right;
    int L[size_left],R[size_right];
    for(int i=0;i<size_left;i++){
        L[i]=A[left+1];
    }

}
void merge_sort(int A[],int left,int right){
    if(left>=right){
        return;
    }
    int mid = left + (right -left)/2;
    merge_sort(A,left,mid);
    merge_sort(A,mid+1,right);
    merge(A,left,mid,right);
}
void arrayPrint(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(){
    int A[] = {4,5,3,2,3,4,5,6,7,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    arrayPrint(A,n);
    merge_sort(A,0,n-1);

}
