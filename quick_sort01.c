#include<stdio.h>
int A[] = {7,6,5,4,9,2,4,1,3};
int i=0;
int j = 8;
void swap(int A,int B){
    int temp=0;
    temp = A;
    A = B;
    B = temp;
}
int partition(int l,int h){
  int pivot = A[l];
  i=l;
  j=h;
  while(i<j){
    do{
      i++;
    }while(A[i]<=pivot);
    do{
        j++;
    }while(A[j]>=pivot);
    if(i<j){
        swap(A[i],A[j]);
    }
  }
  return j;
}
void quickSort(int l,int h){
    if(l<h){
        j=partition(l,h);
        quickSort(l,j);
        quickSort(j+1,h);
    }
}
int main(){
    for(int i=0;i<9;i++){
        printf("%d ",A[i]);
    }
    quickSort(0,8);
    for(int i=0;i<9;i++){
        printf("%d ",A[i]);
    }

}
