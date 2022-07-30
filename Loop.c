#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);

    int i = 0;

    while(i<=number){
        printf("%d\n",i);
        i=i+2;
    }
}
