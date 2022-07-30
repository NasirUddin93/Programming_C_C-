#include<iostream>
using namespace std;
class Complex{
    int real,image;
    public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
    Complex Operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.real;
        return res;
    }

};

int main(){

}
