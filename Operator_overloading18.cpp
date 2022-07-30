#include<iostream>
using namespace std;
class A{
    string x;
    public:
    A(string i){
        x = i;
    }
    void operator+(A);
};
void A::operator+(A a){
    string m = x + a.x;
    cout<<m;
}
int main(){
  A obj1("Welcome");
  A obj2(" Back");
  obj1 + obj2;
}
