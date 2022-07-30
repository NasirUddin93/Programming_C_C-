#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating";
    }
};
class Dog:public Animal{
    public:
    void barking(){
        cout<<"barking";
    }
};
class BobyDog:public Dog{
    public:
    void weep(){
        cout<<"weeping";
    }
};
int main(){
    BobyDog bd;
    bd.weep();
    bd.barking();
    bd.eat();

}
