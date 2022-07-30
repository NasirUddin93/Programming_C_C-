#include<iostream>
using namespace std;
class Animal{
    public:
    void Activity(){
        cout<<"Eating"<<endl;
    }
};
class Man:public Animal{
    public:
    void Activity(){
        cout<<"Speaking"<<endl;
    }
};
int main(){
    Animal a;
    a.Activity();
    Man m;
    m.Activity();
}
