#include<stdio.h>
int main(){
    int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
    for(int x=0;x<2;x++){
        for(int y=0;y<3;y++){
            for(int z=0;z<4;z++){
               printf("%d\n",test[x][y][z]);
            }
        }
    }

}
