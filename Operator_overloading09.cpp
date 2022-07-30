#include<iostream>
using namespace std;
class Number{
    int x,y;
    public:
    Number(){x=0;y=0;}
    Number(int a,int b){x=a;y=b;}
//    void get(int &a,int &b){x=a;y=b;}
//    void set(int a,int b){x=a;y=b;}
    void print(){cout<<x<< " "<<y<<endl;}
    Number operator + (Number obj);
};
Number Number::operator + (Number obj){
    Number tmp;
    tmp.x = x+obj.x;
    tmp.y = y+obj.y;
    return tmp;
}
int main(){
    Number n1(5,6),n2(5,6),n3;
    n3 = n1 + n2;
    n3.print();
}
