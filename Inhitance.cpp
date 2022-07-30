#include<iostream>
using namespace std;
class A{
    public:
    int a = 8;
    void display(){
        cout<<a;
    }
};
class B:public A{
    public:
    int b = 9;
        void display(){
        cout<<a<<b;
    }
};
int main(){
    B bb;
    bb.display();
}
