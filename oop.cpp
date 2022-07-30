#include<iostream>
using namespace std;

int add(int num1,int num2){
    return num1 + num2;
}
int sub(int num1,int num2){
    return num1 - num2;
}

int main(){
    int num1,num2,result,result2;
    cout<<"Enter Two number:\n";
    cin>>num1>>num2;
    result =add(num1,num2);
    result2=sub(num1,num2);
    cout<<"Sum="<<result<<endl;
    cout<<"Sub="<<result2<<endl;
}
