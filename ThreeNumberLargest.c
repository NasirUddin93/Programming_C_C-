#include<stdio.h>
int main()
{
    int A,B,C;
    A=10;
    B=14;
    C=16;
    if(A > B){
        if(A > C){
            printf("A is largest");
        }else{
            printf("C is largest");

        }

    }else{
       if(B > C){
            printf("B is largest");

       }else{
            printf("C is largest");

       }

    }


}
