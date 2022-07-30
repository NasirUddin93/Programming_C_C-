#include<stdio.h>
#include<stdbool.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;
bool isFull(){
    if(top == MAXSIZE){
        return 1;
    }else{
        return 0;
    }
}
void push(int data){
    if(!isFull()){
        top = top +1;
        stack[top] = data;
    }else{
        printf("Stack is full");
    }
}
bool empty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
int pop(){
    if(!empty()){
        top = top - 1;
     }else{
        printf("stack is empty");
     }
}
int peek(){
    return stack[top];
}
int main(){
    push(1);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    push(2);
    pop();
    push(3);
    pop();
    push(4);
    push(5);
    pop();
    peek();
    printf("Peek value is %d at index %d",peek(),top);

}
