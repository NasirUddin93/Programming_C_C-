#include<stdio.h>
void addOne(int* p){
    (*p)++;
}
int main(){
    int* p,i=10;
    p=&i;
    addOne(p);
    printf("%d",*p);

}
