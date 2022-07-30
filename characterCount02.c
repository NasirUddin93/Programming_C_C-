#include<stdio.h>
int main(){
    char str[100];
    int alphabets,digits,others,i;
    alphabets=digits=others=i=0;
    puts("Enter a string line:");
    gets(str);
    while(str[i] !='\0'){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            alphabets++;
        }else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }else{
            others++;
        }
        i++;
    }
    printf("Alphabets=%d\n",alphabets);
    printf("Digits=%d\n",digits);
    printf("Special Character=%d\n",others);
}
