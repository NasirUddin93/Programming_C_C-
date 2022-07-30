#include<stdio.h>
int factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * factorial(number -1);
}
int main(){
    printf("%d",factorial(5));
}
