#include<iostream>
using namespace std;
class A{
    int a=10;
    friend void largestNumber(class A,class B,class C);
};
class B{
   int b=18;
    friend void largestNumber(class A,class B,class C);
};
class C{
    int c=19;
    friend void largestNumber(class A,class B,class C);
};
void largestNumber(A a,B b,C c){
    if(a.a > b.b){
        if(a.a>c.c){
            cout<<"A is largest number"<<endl;
        }else{
            cout<<"C is largest number"<<endl;
        }
    }else{
        if(b.b>c.c){
            cout<<"B is largest number"<<endl;
        }else{
            cout<<"C is largest number"<<endl;
        }
    }

}
int main(){
    A obj1;
    B obj2;
    C obj3;
    largestNumber(obj1,obj2,obj3);

}
