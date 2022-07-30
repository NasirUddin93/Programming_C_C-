#include<iostream>
using namespace std;
class A{
    int a =5;
    int b = 6;
friend void sswap(class a);


};
class B{
    int b=6;
    friend void sswap(class a,class b);
};
void sswap(class a,class b){
    int temp;
    temp = a.a;
    a.a=b.b;
    b.b = temp;
}
void display(){
    cout<<"a = "<<a<<", b="<<b<<endl;
}


int main(){
    A a;
    B b;
    sswap(a,b);
}
