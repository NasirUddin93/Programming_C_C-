#include<stdio.h>
int Queque[5],front = -1,rear=-1;
void enQueque(int value){
    if(rear == 4)
        printf("\nQueque is Full!!");
    else{
        if(front == -1)
            front = 0;
        rear++;
        Queque[rear]=value;
        printf("\nInserted -> %d",value);

    }
}
void deQueque(){
    if(front == -1)
        printf("\nQueque is Empty!!");
    else{
      printf("\nDeleted : %d",Queque[front]);
      front++;
      if(front > rear)
        front = rear = -1;
    }
}

int main(){
    enQueque(1);
    enQueque(2);
    enQueque(3);
    enQueque(4);
    enQueque(5);
    enQueque(5);
    enQueque(5);
    enQueque(5);
    enQueque(5);
    enQueque(5);
    deQueque();
    deQueque();
    deQueque();
    deQueque();
    deQueque();
    deQueque();
    deQueque();
    deQueque();
    deQueque();
}
