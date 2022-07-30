#include<iostream>
using namespace std;
class Complexno{
    int real,imag;
    public:
    Complexno(){
        real = 0;
        imag = 0;
    }
    Complexno(int r){
        real = r;
        imag = 0;
    }
    Complexno(int r,int i){
        real = r;
        imag = i;
    }
    void add(Complexno c11,Complexno c22){
        real = c11.real + c22.real;
        imag = c11.imag + c22.imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    Complexno c1(7,3);
    Complexno c2(8);
    Complexno c3;
    c3.add(c1,c2);
    c3.display();
}
