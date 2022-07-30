#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"Name a"<<endl;
    }
};
class B:public A{
    int b;
    public:
    void display(){
        cout<<"Name b"<<endl;
    }
};
class C:public A{
    int b;
    public:
    void display(){
        cout<<"Name c"<<endl;
    }
};
int main(){
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
