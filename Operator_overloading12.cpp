#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){real=r;imag = i;}
    Complex operator + (Complex const &obj);
    void print(){
        cout<<real<<" + i"<<imag<<endl;
    }
};
Complex Complex::operator + (Complex const &obj){
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}
int main(){
    Complex c1(5,6),c2(7,8),c3;
    c3 = c1 + c2;
    c3.print();
}
