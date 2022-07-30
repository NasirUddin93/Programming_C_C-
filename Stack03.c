#include<stdio.h>
int MAXSIZE = 5;
int stack[5];
int top = -1;
int push(int value){
    top=top+1;
    if(top<MAXSIZE){
        stack[top] = value;
    }else{
        printf("Stack overflow");
    }
}
int pop(){
    int data;

    data = stack[top];
    top=top-1;
    if(top <= -1){
        printf("Underflow\n");
    }
    return data;
}
int peek(){
    return stack[top];
}
int main(){
 push(1);
 push(2);
 push(3);
 push(4);
 push(5);
 pop();
 pop();
 pop();

// while(top > -1){
//    printf("%d",pop());
// }
    printf("%d",peek());


}
