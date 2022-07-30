#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);

    int i = 0;

    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=number);
}
