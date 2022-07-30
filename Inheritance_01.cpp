#include<iostream>
using namespace std;
class A{
    public:
    int a=5;
};
class B{
    public:
    int b=6;
};
class C:public A,public B{
    public:
    int c=7;
    void print(){
        cout<<a<<b<<c;
    }
};

int main(){
    C c;
    c.print();
}
