#include<stdio.h>
void tower(int n,char s,char a,char d){
    if(n==1){
        printf("Disk-%d: %c to %c\n",n,s,d);
        return;
    }
    tower(n-1,s,d,a);
        printf("Disk-%d: %c to %c\n",n,s,d);
    tower(n-1,a,s,d);
    return;
}
int main(){
    tower(3,'S','A','D');
}
