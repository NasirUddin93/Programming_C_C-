#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"Name a"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Name b"<<endl;
    }
};
class C:public A{
    public:
    void display(){
        cout<<"Name c"<<endl;
    }
};

int main(){
//    A a;
//    a.display();
//    B b;
//    b.display();
//    C c;
//    c.display();

    A *ad;
    A a;
    B b;
    C c;
    ad = &a;
    ad->display();
    ad = &b;
    ad->display();
    ad = &c;

    ad->display();

}
