#include<iostream>
using namespace std;
class A{
    int a =5;
    int b =6;
    public:
    int mul(){
        int c = a*b;
        return c;
    }
};
class B: public A{
    public:
    void display(){
        cout<<mul();
    }
};
int main(){
    B b;
    b.display();
}
