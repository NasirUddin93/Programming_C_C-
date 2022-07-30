#include<stdio.h>
int main(){
    int btn;
    printf("Enter btn1 to open the door\n");
    printf("Enter btn2 to close the door\n");
    scanf("%d",&btn);
    switch(btn){
        case 1:
            printf("Open");
            break;
        case 2:
                printf("close");
                break;
         default:
                printf("Invalid");

    }
}
