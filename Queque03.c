#include<stdio.h>
int Queque[5],front=-1,rear=-1;
void enQueque(int value){
    if(front == -1){
        front = 0;
    }
    rear++;
    Queque[rear] = value;
    printf("\nInserted:%d",Queque[rear]);
}
void displayQueque(int Queque[]){
    printf("%d",Queque[0]);
    printf("%d",Queque[1]);
}
int main(){
    enQueque(1);
    enQueque(1);
    displayQueque(Queque);
}
