#include<stdio.h>
int main(){
    int a,b;
    char sign;
    scanf("%d%c%d",&a,&sign,&b);
    int result;
    switch(sign){
        case'+':
        {
            result = a+b;
            printf("%d",result);
            break;
        }
        case'-':
        {
            result = a-b;
            printf("%d",result);
            break;
        }
        case'*':
        {
            result = a*b;
            printf("%d",result);
            break;
        }
        case'/':
        {
            result = a/b;
            printf("%d",result);
            break;
        }
        case'%':
        {
            result = a%b;
            printf("%d",result);
            break;
        }
        default:
            printf("Not matching");



    }




}
