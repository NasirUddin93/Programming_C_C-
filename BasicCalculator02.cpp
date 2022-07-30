#include<iostream>
using namespace std;

int add(int num1,int num2){
    return num1 + num2;
}
void sub(int num1,int num2){
    cout<<"Subtraction Result = "<<num1 - num2<<"\n";
}
int mul(int num1,int num2){
    return num1 * num2;
}
void div1(int num1,int num2){
    cout<<"Divisoin Result = "<<num1 / num2<<"\n";
}

int main(){
int num1,num2;
cout<<"Enter two numbers:\n";
cin>>num1>>num2;

cout<<"Addition Result = "<<add(num1,num2)<<"\n";
sub(num1,num2);
cout<<"Multiplication Result = "<<mul(num1,num2)<<"\n";
div1(num1,num2);

}
