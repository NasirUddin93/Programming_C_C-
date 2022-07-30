#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1) * n;
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int r =fact(n);
    printf("%d! =  %d",n,r);

}
