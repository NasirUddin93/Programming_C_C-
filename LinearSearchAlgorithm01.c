#include<stdio.h>
void linearSearch(int A[],int x){
    int i =0;
    int n=7;
    for(i;i<=n;i++){
        if(A[i]==x){
            printf("%d is at index: %d",x,i);
        }

    }
        if(i>n){
            printf("Not found");
        }
}

int main(){
    int A[] = {34,23,12,45,56,67,78};
    int x=0;
    scanf("%d",&x);
    linearSearch(A,x);

}
