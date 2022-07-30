#include<iostream>
using namespace std;
class A{
    int a = 5;
    friend class B;
};
class B{

    int b = 6;
    friend void swapFunction(class B);
};
void swapFunction(class B){
    int temp;
    temp = B.a;
    B.a=B.b;
    B.b= temp;
    cout<<B.a<<B.b;
}

int main(){
    class B b;
    swapFunction(b);
}
