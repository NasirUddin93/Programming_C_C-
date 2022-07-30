#include<iostream>
using namespace std;
class A{
    int a=5;
    friend void swapp(class A,class B,class C);
};
class B{
    int b=6;
    friend void swapp(class A,class B,class C);
};
class C{
    int c=7;
    friend void swapp(class A,class B,class C);
};


void swapp(A a,B b,C c){
    int temp;
    temp = b.b;
    b.b=a.a;
    a.a=c.c;
    c.c=temp;

    cout<<"a="<<a.a<<", b="<<b.b<<"c="<<c.c;
}
int main(){
    A a;
    B b;
    C c;
    swapp(a,b,c);
}
