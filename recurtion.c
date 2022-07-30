#include<stdio.h>

int factorial(int num){
    if(num > 0){
      return num * factorial(num-1);

    }
    if(num == 0){
        return 1;
    }
}
int main(){
 int num = 5;
 int result = factorial(num);
 printf("%d",result);

}
