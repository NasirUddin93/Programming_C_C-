#include<stdio.h>
#include<stdbool.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;
bool empty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
bool isFull(){
    if(top == MAXSIZE){
        return 1;
    }else{
        return 0;
    }

}
int peek(){
    int peek = stack[top];
    return peek;

}
void push(int data){
    if(!isFull()){
        top = top + 1;
        stack[top] = data;
    }else{
        printf("Stack is full so you can not push %d",data);
    }
}
int pop(){
    int data;
    if(!empty()){
        data = stack[top];
        top = top -1;
        return data;
    }else{
        printf("stack is empty!");
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    push(11);
//    printf("%d is poped\n",pop());
    printf("top is %d\n",stack[top]);
    printf("peek value is %d\n",peek());

}
