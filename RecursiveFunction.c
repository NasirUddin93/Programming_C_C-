#include<stdio.h>

int sum(int num){
    int result;
    if(num != 0){
      return num + sum(num-1);
    }
    return num;
}
int main(){
  int num;
  scanf("%d",&num);
  printf("%d",sum(num));
}
