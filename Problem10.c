#include<stdio.h>
int add(int a,int b,int c){
    return a+b+c;
}
void display(){
    printf("%d",add(3,4,5));
}
int main(){
    display();
}
