#include<stdio.h>
int main(){
    int i,j=5;
    i = 1;
    printf("i = %d,j= %d\n",i,j);
    i = ++j;
    printf("i = %d,j= %d\n",i,j);
    i = j++;
    printf("i = %d,j= %d\n",i,j);

}
