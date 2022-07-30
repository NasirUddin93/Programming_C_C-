#include<iostream>
using namespace std;
class Address{
    public:
    string addressLine,city,state;
    Address(string addressLine,string city,string state){
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};
class Employee{
    private:
    Address* address;
    public:
    int id;
    string name;
    Employee(int id,string name,Address* address){
        this->id = id;
        this->name = name;
        this->address = address;
    }
    void display(){
        cout<<id<<name<<address->addressLine<<address->city<<address->state;
    }
};
int main(){
    Address a("Uttara","Dhaka","Bangladesh");
    Employee e(101,"Shamim",&a);
    e.display();
}
