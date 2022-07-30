#include<stdio.h>
void T(int n,char s,char a,char d){
    if(n==1){
        printf("Disk:%d, %c to %c\n",n,s,d);
        return;
    }
    T(n-1,s,d,a);
        printf("Disk:%d, %c to %c\n",n,s,d);
    T(n-1,a,s,d);
    return ;

}
int main(){
    int n=5;
    T(n,'s','a','d');
}
