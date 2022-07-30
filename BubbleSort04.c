#include<stdio.h>
int main(){
    int n[] = {48,24,75,57,100};
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    int temp = 0,i=0,j=0;
    for( j=0;j<5;j++){
        for( i=0;i<5;i++){
            if(n[i] < n[i+1]){
                temp = n[i];
                n[i] = n[i+1];
                n[i+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf(" %d ",n[i]);
    }
}
