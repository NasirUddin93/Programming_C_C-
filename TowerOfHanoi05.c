#include<stdio.h>
void TowerOfHanoi(int disk,char s,char a,char d){
    if(disk == 1){
        printf("Disk:%d, %c to %c\n",disk,s,d);
        return;
    }
    TowerOfHanoi(disk-1,s,d,a);
        printf("Disk:%d, %c to %c\n",disk,s,d);
    TowerOfHanoi(disk-1,a,s,d);
    return;
}
int main(){
    int disk;
    printf("Enter disk Number:\n");
    scanf("%d",&disk);
    TowerOfHanoi(disk,'A','B','C');
}
