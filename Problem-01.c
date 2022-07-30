#include<stdio.h>
void fact(int n){
    int f = 1;
    for(int i =n; i>0;i--){
        f *= i;
    }
        printf("%d! = %d\n",n,f);
}

int main(){
    fact(5);
}
