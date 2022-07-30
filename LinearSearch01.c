#include<stdio.h>
#include<stdbool.h>
int main(){
    int number[] = {4,5,6,3,2,4,7,8,4,9};
    int searchNumber = 9;
    int index=0;
    bool found = false;
    for(int i=0;i<10;i++){
        if(number[i] == searchNumber){
            index = number[i];
            printf("%d",index);
            found = true;
        }
    }
    if(!found){
        printf("Number is not found");
    }
}
