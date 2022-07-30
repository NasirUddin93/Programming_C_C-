#include<stdio.h>
void changeX(int x){
    x=5;
    printf("%d\n",&x);
    printf("%d\n",x);
}
int main(){
    int x;
    x=6;
    printf("%d\n",&x);
    changeX(x);
    printf("%d\n",x);

}
