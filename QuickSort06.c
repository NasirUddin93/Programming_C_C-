#include<stdio.h>
int main(){
    int A[] = {4,5,3,4,5,6,7,1,2,3,4,3,2,4,5};

    int n = sizeof(A)/sizeof(A[0]);
    printf("%d\n",sizeof(A));
    printf("%d\n",sizeof(A[0]));
    printf("%d\n",n);

    for(int i=0;i<n;i++){
        printf("%d, ",A[i]);
    }

}
