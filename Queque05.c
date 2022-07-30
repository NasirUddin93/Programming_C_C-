#include<stdio.h>
#define SIZE 5
int Queque[SIZE],front=-1,rear=-1;
void enQueque(int value){
    if(rear < SIZE-1){
            if(front == -1)
            front = 0;
        rear++;
        Queque[rear]=value;
        printf("\nInserted:%d",Queque[rear]);
    }else{
        printf("\nQueque is full");
    }

}
void deQueque(){
    if(front <= SIZE)
        front++;
    else{
        printf("\nQueque is khali");
    }
}
void display(){
    printf("Queque elements are:\n");
    for(int i = front;i<=rear;i++){
        printf("%d ",Queque[i]);
    }


}
int main(){
    enQueque(7);
    enQueque(8);
    deQueque();
    deQueque();
    deQueque();

    display();

    printf("\nfornt:%d",front);
    printf("\nrear:%d",rear);
}
