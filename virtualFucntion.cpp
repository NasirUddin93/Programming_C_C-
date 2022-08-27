#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"A"<<endl;
    }
};
class B:public virtual A{
    public:
    void display(){
        cout<<"B"<<endl;
    }
};
class C:public virtual A{
    public:
    void display(){
        cout<<"C"<<endl;
    }
};
class D:public B,public C{
    public:
    void display(){
        cout<<"D"<<endl;
    }
};
int main(){
    A *ad;
    A a;
    B b;
    C c;
    D d;
    ad = &a;
    ad->display();
}
