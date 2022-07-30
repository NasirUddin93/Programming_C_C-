#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    public:
    void setValue(int id,string name){
        this->id=id;
        this->name = name;
    }
    void display(){
        cout<<id<<name;
    }
};
int main(){
    Employee e;
//    e.setValue(101,"Shihab");
    e.display();
}
