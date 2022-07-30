#include<iostream>
using namespace std;
class A{
    int a=5;
    friend void swapp(class A,class B);
};
class B{
    int b=6;
    friend void swapp(class A,class B);
};
void swapp(A a,B b){
    a.a = a.a +b.b;   // a=11
    b.b = a.a - b.b;   //5=11-6
    a.a = a.a -b.b;   //    6=11-5;
    cout<<"a="<<a.a<<" b="<<b.b<<endl;
}
int main(){
    A a;
    B b;
    swapp(a,b);
}
