#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    n *= fact(n-1);
    return n;

}
int main(){
    int r = fact(5);
    printf("%d",r);
}
