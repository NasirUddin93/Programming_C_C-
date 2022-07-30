#include<stdio.h>
const double PI = 3.14;
int main(){
    double r;
    printf("Enter the radius value:\n");
    scanf("%lf",&r);
    double c;
    c= 2*PI*r;
    printf("C = %.2lf\n",c);
    double a;
    a=PI*r*r;
    printf("A = %.2lf",a);

}
