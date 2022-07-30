#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"a"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"b"<<endl;
    }
};
class C:public A{
    public:
    void display(){
        cout<<"c"<<endl;
    }
};

int main(){
    A *ad;
    A a;
    B b;
    C c;
    a.display();
    b.display();
    c.display();
    ad = &a;
    ad->display();
    ad = &b;
    ad->display();
    ad = &c;
    ad->display();
}
