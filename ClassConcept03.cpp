#include<iostream>
using namespace std;
class Employee{
    public:
    void salary(int basicSalary){
        float houseRent;
        float transport;
        houseRent = basicSalary * 0.5;
        transport = basicSalary * 0.1;
        double totalSalary;
        totalSalary = basicSalary + houseRent + transport;
        cout<<totalSalary;
    }
};

int main(){
    int basicSalary;
    cin>>basicSalary;
    Employee e;
    e.salary(basicSalary);
}
