#include<stdio.h>
int main(){
    int A[3][3]={
                    {50,60,70},
                    {90,100,120},
                    {30,40,60}

                };

    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            printf("%d ",A[r][c]);

        }
        printf("\n");
    }



}
