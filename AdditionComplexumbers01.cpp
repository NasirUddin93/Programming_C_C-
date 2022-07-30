#include<iostream>
using namespace std;
class Complexno{
    int real,imag;
    public:
    Complexno(){
        real = 0;
        imag = 0;
    }
    Complexno(int i){
        real = i;
        imag = i;
    }
    Complexno(int a,int b){
        real = a;
        imag = b;
    }
    void add(Complexno c1,Complexno c2){
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
   int real,imag;
   Complexno c1(3);
   c1.display();
   Complexno c2(3,4);
   c2.display();
    Complexno c3;
   c3.add(c1,c2);
   c3.display();
}

