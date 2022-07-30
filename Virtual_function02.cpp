#include<iostream>
using namespace std;
class A{
    public:
    virtual void print(){
        cout<<"a"<<endl;
    }
};
class B:public A{
    public:
    void print(){
        cout<<"b"<<endl;
    }
};
class C:public A{
    public:
    void print(){
        cout<<"c"<<endl;
    }
};
int main(){
//    A a;
//    a.print();
//    B b;
//    b.print();
//    C c;
//    c.print();
    A *ad;
    A a;
    ad = &a;
    ad->print();
    B b;
    ad = &b;
    ad->print();
    C c;
    ad= &c;
    ad->print();
}
