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
void swapp(A ob1,B ob2){
    int temp = ob1.a;
    ob1.a=ob2.b;
    ob2.b=temp;
    cout<<"a = "<<ob1.a<<", b = "<<ob2.b<<endl;
}
int main(){
    A obj1;
    B obj2;
    swapp(obj1,obj2);
}
