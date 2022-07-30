#include<iostream>
using namespace std;
class Employee{
    public:
    Employee(int id,int salary){
        cout<<"constructor"<<id<<" "<<salary<<endl;
    }
     Employee(int id,int salary,int age){
        cout<<"constructor"<<id<<" "<<salary<<age<<endl;
    }
    ~Employee(){
        cout<<"disconstructor";
    }
};
int main(){
    Employee e1(101,50000);
    Employee e2(101,50000,25);
}
