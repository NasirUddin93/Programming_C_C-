#include<iostream>
using namespace std;
int add(int num1,int num2){
    return num1+num2;
}
int sub(int num1,int num2){
    return num1-num2;
}
int mul(int num1,int num2){
    return num1*num2;
}
int div1(int num1,int num2){
    if(num2!=0){
        return num1/num2;

    }else{
        cout<<"Undifined!";
        return 0;
    }

}
int main(){
    int num1,num2;
    cout<<"Enter two integer Number:\n";
    cin>>num1>>num2;
    cout<<"Addion = "<<add(num1,num2)<<endl;
    cout<<"Sub = "<<sub(num1,num2)<<endl;
    cout<<"Mul = "<<mul(num1,num2)<<endl;
    cout<<"Divisoin = "<<div1(num1,num2)<<endl;

}

