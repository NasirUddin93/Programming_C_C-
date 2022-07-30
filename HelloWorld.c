#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter the x value:\n");
    int x;
    scanf("%d",&x);
    int sum;
    sum = pow(x,4)+(5*x)-3;
    printf("%d",sum);
}
