#include<iostream>
using namespace std;
class Register{
    public:
        int id = 1001;
        string name = "Nadim";
        string contact = "01681363517";
        string address = "Uttara";
};
class Department{
    public:
        int classQty = 8;
};
class Accounts{
    public:
        int basicSalary = 50000;

};
class Employee:public Register,public Department,public Accounts{
        public:
        int bonusCalculation(){
            int bonus = 0;
            if(classQty > 7){
                bonus = basicSalary * .1;

            }
            return bonus;
        }
        void displaySalary(){
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<contact<<endl;
            cout<<address<<endl;
            cout<<classQty<<endl;
            cout<<basicSalary<<endl;
            cout<<bonusCalculation();

        }
};
int main(){
    Employee e;
    e.displaySalary();
}
