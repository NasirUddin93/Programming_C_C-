#include<iostream>
using namespace std;
class ComplexNumber{
    int real,imag;
    public:
    ComplexNumber(){
        real = 0;
        imag = 0;
    }
    ComplexNumber(int i){
        real = i;
        imag = i;
    }
    ComplexNumber(int d,int i){
        real = d;
        imag = i;
    }
    void add(ComplexNumber c1,ComplexNumber c2){
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};
int main(){
    ComplexNumber c1(3);
    c1.display();
    ComplexNumber c2(3,5);
    c1.display();
    ComplexNumber c3;
    c3.add(c1,c2);
    c3.display();
}
