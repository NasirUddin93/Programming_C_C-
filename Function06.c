#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int x;
    int y;
    printf("Enter two values:\n");
    scanf("%d%d",&x,&y);
    int r= add(x,y);
    printf("%d+%d=%d",x,y,r);
}
