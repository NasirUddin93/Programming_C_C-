#include<stdio.h>
void tower(int n,char s,char a,char d);
int main(){
    int n=3;
    tower(n,'S','A','D');
}
void tower(int n,char s,char a,char d){
    if(n==1){
        printf("%c to %c\n",s,d);
        return;
    }
    tower(n-1,s,d,a);
        printf("%c to %c\n",s,d);
    tower(n-1,a,s,d);
    return;
}
