#include<stdio.h>
int main(){

    const int x =10;
    x++;   /// x = 11
    x++;   /// x = 12
    x--;   /// x = 11
    x--;   /// x = 11
    x--;   /// x = 11
    x++;   /// x = 12
    x++;   /// x = 13
    x++;   /// x = 14
    x--;   /// x = 13
    int y = 6;
    int z= x+y;
    printf("%d",z);



}
