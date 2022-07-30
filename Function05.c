#include<stdio.h>
float add(float n1,float n2){
    return n1+n2;
}
float sub(float n1,float n2){
    return n1-n2;
}
float mult(float n1,float n2){
    return n1*n2;
}
float div(float n1,float n2){
    return n1/n2;
}
int main(){
    printf("%f\n",add(8.5,7.0));
    printf("%f\n",sub(8.5,7.0));
    printf("%f\n",mult(8.5,7.0));
    printf("%f\n",div(8.5,7.0));
}
