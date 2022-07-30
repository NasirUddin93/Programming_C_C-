#include<iostream>
using namespace std;
class A{
    int a = 5;
    friend void Swap(class A,class B);
};
class B{
    int b = 6;
    friend void Swap(class A,class B);
};
void Swap(A x, B z){
    int temp = x.a;
    x.a = z.b;
    z.b = temp;
    cout<<"a = "<<x.a<<", "<<"b = "<<z.b<<endl;
}
int main(){
    A a;
    B b;
    Swap(a,b);
}
