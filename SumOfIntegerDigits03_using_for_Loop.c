#include<stdio.h>
int main(){
    int n =0, remainder,quotent,sum=0,sum2=0;
    scanf("%d",&n);
    for(int i = 0; n>0; i++){
        quotent=n/10;
        remainder=n%10;
        sum += remainder; //sum = sum + remainder
        sum2 += quotent;  // sum2 = sum2 + quotent
        n = quotent;
    }
    printf("%d\n",sum);
    printf("%d",sum2);
}

