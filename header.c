//This program is for header file description

#include<stdio.h>
#define PI = 3.1416
int y = 10   //Global Declaration

int main(){
    int x = 5;
    int *p;     //Declaration
       p = &x// Initialization
       printf("%d",p);
       add(4,5);

}

int add(int a,int b){
    return a+b;
}
