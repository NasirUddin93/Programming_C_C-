#include<stdio.h>
#include<stdbool.h>
int arraySize = 8;
int top = -1;
int stack[8];  ///Nadim Question why 8? why other number?
bool isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
bool isFull(){
    if(top == arraySize-1){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    if(!isFull()){
        top +=1;
        stack[top] = data;
    }else{
        printf("Stack is full,so you can not push\n");
    }
}
int pop(){
    int data;
    if(!isEmpty()){
        data = stack[top];
        top -=1;
        return data;
    }else{
        printf("Stack is empty");
    }
}
//void peek(){
//    printf("Top of the stack is %d",stack[top]);
//}
int peek(){
    return stack[top];
}
int main(){
//    printf("%d",pop());
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    printf("%d",isFull());



}
