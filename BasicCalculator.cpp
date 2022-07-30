#include<iostream>
using namespace std;
void add(int num1,int num2){
    cout<<num1 + num2<<"\n";

}
void sub(int num1,int num2){
    cout<<num1 - num2<<"\n";

}
void mul(int num1,int num2){
    cout<<num1 * num2<<"\n";

}
void div2(int num1,int num2){
    cout<<num1 / num2<<"\n";

}
int main()
{
    int num1,num2,result;

    cin>>num1>>num2;

    add(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    div2(num1,num2);





}
