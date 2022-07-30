#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"a";
    }
};
class B{
    public:
    void display(){
        cout<<"b";
    }
};
class C:public A,public B{
};
int main(){
    C c;
    c.display();

}
