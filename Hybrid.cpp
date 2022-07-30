#include<iostream>
using namespace std;
class A{
    public:
    int a = 5;
};
class B:public A{
    public:
    int b = 6;
};
class C:public A{
    public:
    int c = 7;
};
class D:public B,public C{
    public:
    int d = 8;
};
int main(){
    D d;
    cout<<d.B::a;
    cout<<d.C::a;
}
