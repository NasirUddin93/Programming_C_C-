#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
int Queque[SIZE],front=-1,rear=-1;
bool isEmpty(){
    if(front<rear)
        return 0;
    else
        return 1;
}
bool isFull(){
    if(rear < SIZE-1){
        return 0;
    }else{
        return 1;
    }
}
void peek(){
    printf("\nPeek:%d",Queque[rear]);
}
void enQueque(int value){
    if(!isFull()){
        if(front ==-1)
            front=0;
        rear++;
        Queque[rear]=value;
        printf("\nInsert:%d",Queque[rear]);
    }else{
        printf("\nQueque is Full!!");
    }
}
void deQueque(){
    if(!isEmpty())
        front++;
    else
        printf("\nQueque is Empty!!");
}
void display(){
    if(isEmpty())
        printf("Queque is empty\n");
    else{
        printf("Queque elements are:\n");
        for(int i=front;i<rear;i++){
            printf("%d ",Queque[i]);
        }
    }
}
int main(){
//    enQueque(1);
//    enQueque(2);
//    enQueque(3);
//    enQueque(4);
//    enQueque(5);
//    deQueque();
//    deQueque();
//    deQueque();
//    deQueque();
//    deQueque();

    printf("\nfornt:%d",front);
    printf("\nreat:%d",rear);
    peek();
    display();
}

