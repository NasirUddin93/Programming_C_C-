#include<stdio.h>
int main(){
    int n[5] ={ 50,100,200,30,51};
    int temp;
    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){
            if(n[j]>n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }


    for(int i=0; i<4; i++){
        printf("%d, ",n[i]);
    }
}
