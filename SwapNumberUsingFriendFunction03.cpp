#include<iostream>
using namespace std;
class A{
    int a = 0;
    friend void swapp(class A,class B);
    public:
    void setValue(int x){
        a = x;
    }
};
class B{
    int b = 0;
    friend void swapp(class A,class B);
    public:
    void setValue(int y){
        b = y;
    }
};
void swapp(A a,B b){
    cout<<"a = "<<a.a<<", b = "<<b.b<<endl;
    a.a = a.a + b.b;
    b.b = a.a - b.b;
    a.a = a.a - b.b;
    cout<<"a = "<<a.a<<", b = "<<b.b;
}
int main(){
    A a;
    int x,y;
    cin>>x>>y;
    a.setValue(x);
    B b;
    b.setValue(y);
    swapp(a,b);

}
