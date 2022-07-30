#include<stdio.h>
int main(){
    int number = 32;
    int temp[10];
    int remainder,quotent;
    int i=0;
    for(i;number>0;i++){
        temp[i] = number%2;
        number = number / 2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",temp[i]);
    }
}
