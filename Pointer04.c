#include<stdio.h>
int main(){
    int n,i,*ptr,sum=0;
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Error! memory not allocated");
        exit(0);
    }
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr +i);
        sum +=*(ptr+i);
    }
    printf("Sum = %d",sum);
    free(ptr);
}
