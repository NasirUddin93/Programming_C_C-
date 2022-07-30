#include<iostream>
using namespace std;
class A{
    string x;
    public:
    A(){}
    A(string i){
        x=i;
    }
    void operator + (A a){
        string m = x+a.x;
        cout<<m;
    }
};

int main(){
    A obj1("Hello");
    A obj2(" World");
    obj1 + obj2;
}
