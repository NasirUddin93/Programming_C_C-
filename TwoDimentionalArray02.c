#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    puts(str);
    int alphabets,digit,sc,i;
    alphabets=digit=sc,i=0;
    while(str[i] !='\0'){
        if(str[i]>'a'&&str[i]<'z' || str[i]>'A'&&str[i]<'Z'){
            alphabets++;
        }else if(str[i]>'0'&&str[i]<'9' ){
            digit++;
        }else{
            sc++;
        }
        i++;
    }
    printf("Alphabets=%d\n",alphabets);
    printf("Digits=%d\n",digit);
    printf("Special Character=%d\n",sc);

}
