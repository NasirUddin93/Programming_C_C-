#include<stdio.h>
int main(){
int i=0;
    level2:
        printf("this is level2\n");
        i++;
        if(i==9){
            goto exit;
        }
    for(i=0;i<10;i++){
        printf("%d\n",i);
        if(i==7){
            goto level1;
        }
    }
level1:
    printf("this is level 1\n");
    i++;
    if(i==8)
    {
        goto level2;
    }

exit:
    printf("Exit level");
}
