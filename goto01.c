#include<stdio.h>
int main(){
    int i =0;
    begining:
    if(i==10){
        goto exit;
    }
    printf("%d\n",i);
    i++;
    goto begining;

  exit:
  printf("end");
}
