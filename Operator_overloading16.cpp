#include<iostream>
using namespace std;
class Addition{
    int a,b;
    public:
    Addition(){}
    Addition(int x,int y){a=x;b=y;}
    Addition operator + (Addition add){
        Addition obj;
        obj.a =a+add.a;
        obj.b =b+add.b;
        return obj;
    }
    void print(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Addition o1(5,6),o2(7,8),o3;
    o3= o1 + o2;
    o3.print();
}
