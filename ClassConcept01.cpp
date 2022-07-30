#include<iostream>
using namespace std;
class Calculator{
    public:
    int num1;
    int num2;
    int result;
    void setMethod(int a,int b){
        num1 = a;
        num2 = b;
    }
    void add(){
        result = num1 + num2;
        cout<<result;
    }
     void sub(){
        result = num1 - num2;
        cout<<result;
    }


};

int main(){
    Calculator c;
    c.setMethod(5,6);
    c.add();
    c.sub();

}
