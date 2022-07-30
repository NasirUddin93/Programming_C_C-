#include<iostream>
using namespace std;
class A{
    int a = 5;
    friend void swapp(class A,class B);
};
class B{
    int b = 6;
    friend void swapp(class A,class B);
};
void swapp(A a,B b){
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
    cout<<"a = "<<a.a<<", b = "<<b.b<<endl;
}
int main(){
    A a;
    B b;
    swapp(a,b);

}
