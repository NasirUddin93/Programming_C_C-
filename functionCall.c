#include<stdio.h>
void swap(int x,int y){
    printf("x = %d, y = %d",x,y);
    int temp;
    temp = x;
    x=y;
    y= temp;
    printf("\nx = %d, y = %d",x,y);
}

int main(){
    int x = 5;
    int y = 6;
    swap(x,y);
    printf("\nx = %d, y = %d",x,y);
}
