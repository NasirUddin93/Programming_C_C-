#include<iostream>
using namespace std;
class Register{
    public:
        int id = 101;
        string name = "Shiha";
        string contact = "0170756738";
        string Address = "Uttara";
};
class Account{
    public:
        int basicSalary = 50000;

};
class Employee:public Register,public Account{
    public:
        int salaryCalculation(){
            int bonus = basicSalary * .2;
            return bonus;
        }
        void display(){
            cout<<id;
        }
};
int main(){
    Employee e;
    e.display();
}
