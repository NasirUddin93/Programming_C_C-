#include<stdio.h>
int main(){
    char str[100];
    int i,alphabets,digits,others;
    i=alphabets=digits=others=0;
    gets(str);
    while(str[i] != '\0'){
        if((str[i]>= 'a' && str[i]<= 'z') ||(str[i] >= 'A' && str[i]<='Z')){
            alphabets++;
        }else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }else{
            others++;
        }
        i++;
    }
    printf("%d\n",alphabets);
    printf("%d\n",digits);
    printf("%d\n",others);
}
