#include<stdio.h>
#include<string.h>
int main(){
    char str[5] = "poopy";
    int flag = 0;
    int length = 5;
    for(int i=0; i<length; i++){
        if(str[i] != str[length-i-1]){
            flag = 5;
            break;
        }
    }
    if(flag == 0){
        printf("Yes");
    }else{
        printf("No");
    }
}
