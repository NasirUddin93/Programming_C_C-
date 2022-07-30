#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"A";
    }
};
class B{
    public:
    void display(){
        cout<<"B";
    }
};
class C:public A,public B{
    public:
    void view(){
        A::display();
        B::display();
    }
};
int main(){
 C c;
 c.view();
}
