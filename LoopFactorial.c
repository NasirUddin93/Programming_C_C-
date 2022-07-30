#include<stdio.h>
int main(){
    int factorial;
    scanf("%d",&factorial);
    for(int i=factorial-1; i>0; i--){
        factorial *= i;
    }
    printf("%d",factorial);
}
