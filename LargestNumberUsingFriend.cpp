#include<iostream>
using namespace std;
class A{
    int a=5;
    friend void largetstNumber(class A,class B,class C);
};
class B{
    int b=6;
    friend void largetstNumber(class A,class B,class C);
};
class C{
    friend void largetstNumber(class A,class B,class C);
    int c=7;
};
void largetstNumber(A a,B b,C c){

    cout<<a.a<<b.b<<c.c<<endl;
}

int main(){
  A a;
  B b;
  C c;
  largetstNumber(a,b,c);
}
