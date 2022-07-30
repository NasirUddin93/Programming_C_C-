#include<stdio.h>
int main(){
    int n=50,r[16];
    int i =0;
    while(n>0){
        r[i] = n%2;
        n = n/2;
        i++;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",r[i]);
    }
}
