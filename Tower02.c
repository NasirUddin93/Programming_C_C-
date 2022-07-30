#include<stdio.h>
void tower(int num,char s,char a,char d){
    if(num == 1){
        printf("Disk:%d, %c to %c\n",num,s,d);
        return;
    }
    tower(num-1,s,d,a);
        printf("Disk:%d, %c to %c\n",num,s,d);
    tower(num-1,a,s,d);
    return;
}
int main(){
    int num=0;
    printf("Enter the disk number:\n");
    scanf("%d",&num);
    tower(num,'A','B','C');
}
