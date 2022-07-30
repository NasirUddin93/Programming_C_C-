#include<stdio.h>
int main(){
    int a[] = {23,45,56,10,23,90};
    int flag=1,n,i;
    scanf("%d",&n);
    for(i=0;i<6;i++){
        if(a[i] ==n){
            flag = 0;
            printf("%d",i+1);
        }

    }
    if(flag){
        printf("Not found");
    }

}
