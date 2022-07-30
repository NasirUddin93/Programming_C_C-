#include<stdio.h>
int main(){
    int i =0;
    while(i<=5){
        printf("%d\n",i);
        if(i==3){
            break;
        }
        if(i==5){
            continue;
        }
        i++;
    }
}
