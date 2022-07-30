#include<iostream>
using namespace std;
class A{
    string x;
    public:
        A(){}
        A(string i){
            x=i;
        }
        void operator+(A);
        void display();
};
void A::operator+(A a){
    string m = x+a.x;
    cout<<m;
}
int main(){
    A a1("welcome");
    A a2("back");
    a1+a2;
}
