#include<iostream>
using namespace std;
class Animal{
    public:
        void eating(){
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
        void weeping(){
            cout<<"weeping";
        }
};
class OneDayDog:public BobyDog{
    public:
        void keke(){
            cout<<"keke";
        }
};
int main(){
    OneDayDog bd;
    bd.keke();
    bd.weeping();
    bd.barking();
    bd.eating();
}
