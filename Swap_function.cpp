#include<iostream>
using namespace std;
class A{
    int a=4;
    friend void display(class A);
};
void display(A a){
    cout<<a.a;
}
int main(){
    A a;
    display(a);
}
