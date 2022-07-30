#include<iostream>
using namespace std;
class Base{
    public:
   virtual void fun(){cout<<"Base fun"<<endl;}
};
class Derived:public Base{
    public:
    void fun(){cout<<"Derived fun"<<endl;}
};
void myFun(Base *obj){
    obj->fun();
}
int main(){
    myFun(new Base);
    myFun(new Derived);
    return 0;
}
