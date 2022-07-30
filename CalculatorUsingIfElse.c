#include<stdio.h>
int main(){
    int a;
    int b;
    char sign;
    scanf("%d",&a);
    scanf("%c",&sign);
    scanf("%d",&b);
    if(sign == '+'){
        printf("sum = %d",a+b);

    }
    if(sign == '-'){
        printf("sub = %d",a-b);

    }
    if(sign == '*'){
        printf("mul = %d",a*b);

    }
    if(sign == '/'){
        if(b == 0){
            printf("infinity");
        }else{
            printf("Div = %d",a/b);

        }

    }

}
