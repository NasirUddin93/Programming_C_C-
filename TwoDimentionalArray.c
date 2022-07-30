#include<stdio.h>
int main(){
    //Two Dimensional   4x3
    int A[4][3] ={
                    {3,4,5},
                    {4,5,6},
                    {5,6,7},
                    {5,6,7}
                };
    for(int row=0;row<4;row++){
        for(int column=0;column<3;column++){
            printf("%d ",A[row][column]);
        }
        printf("\n");
    }

}
