#include<iostream>
using namespace std;
class Calculator{
    public:
    int num1;
    int num2;
    int result;
    void setValue(int num1,int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    void add(){
        result = num1+num2;
        cout<<result<<endl;
    }
    void sub(){
        result = num1-num2;
        cout<<result<<endl;
    }
    void mul(){
        result = num1*num2;
        cout<<result<<endl;
    }
    void div(){
        result = num1/num2;
        cout<<result<<endl;
    }
};
int main(){
    int a;
    int b;
    cout<<"Enter two number:\n";
    cin>>a>>b;
    Calculator c;
    c.setValue(a,b);
    c.add();
    c.sub();
    c.mul();
    c.div();
}
