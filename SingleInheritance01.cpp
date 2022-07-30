#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};
class Dog: public Animal{
    public:
    void barking(){
        cout<<"barking"<<endl;
    }
};
 class BabyDog: public Dog
{
    public:
     void weep() {
    cout<<"Weeping...";
     }
};
int main(){
    BabyDog b;
    b.eat();
    b.barking();
    b.weep();
}
