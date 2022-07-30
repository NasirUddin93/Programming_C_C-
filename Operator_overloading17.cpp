#include<iostream>
using namespace std;
class Number{
    int a,b;
    public:
    Number(){}
    Number(int x,int y){a=x;b=y;}
    Number operator+ (Number a){
        Number temp;
        temp.a = a+a.x;
        temp.b = b+a.b;
        return temp;
    }
    void print(){
        cout<<a<<b;
    }
};

int main(){
    Number a1(5,6),a2(7,8),a3;
    a3 = a1 + a2;
    a3.print();

}
