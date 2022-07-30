#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>1 && n<100){
        printf("%d, ",1);
        for(int i=2;i<=n/2;i++){
            if(n%i == 0){
                printf("%d, ",i);
            }
        }
        printf("%d",n);
    }
}
