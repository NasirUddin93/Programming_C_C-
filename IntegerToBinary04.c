#include<stdio.h>
int main(){
    int number =0;
    scanf("%d",&number);
    int tempArray[16];
    int i=0;
    for(i;number>0;i++){
        tempArray[i] = number%2;
        number = number / 2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",tempArray[i]);
    }
}
