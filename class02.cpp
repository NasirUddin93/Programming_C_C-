#include<iostream>
using namespace std;
class Employee{
    private:
        float houseRent;
        float transportCost;
    public:
        int id;
        string name;
        string className;
        int salary(int basicSalary,bool attendance){
            if(attendance){
                return basicSalary + houseRent + transportCost + 500;
            }
                return basicSalary + houseRent + transportCost;
        }

};


int main(){
    class Employee emp1;
    int id;
    string name;
    id = emp1.id = 101;
    emp1.name = "Nasir";
    name = emp1.name;
    cout<<name;
    cout<<id;

}
