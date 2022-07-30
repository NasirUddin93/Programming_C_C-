#include<stdio.h>
int main(){
    int number[3][3] = {{3,4,5},{5,6,3},{2,3,7}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",number[i][j]);
        }
        printf("\n");
    }

}
