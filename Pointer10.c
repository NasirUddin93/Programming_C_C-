#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("%d%d",a,b);
}
int main(){
    int a=5,b=6;
    printf("%d%d",a,b);
    swap(a,b);
}
