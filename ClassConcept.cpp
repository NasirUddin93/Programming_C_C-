#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int basicSalary;
    void salary(int basicSalary){
        float houseRent;
        float transport;
        houseRent = basicSalary * 0.5;
        transport = basicSalary * 0.1;
        double totalSalary;
        totalSalary = basicSalary + houseRent + transport;
        cout<<totalSalary;
    }
    void display(){
        cout<<"Hello world";
    }
};
int main(){
//    cin>>id>>name>>basicSalary;
    Employee e1;
    e1.salary(50000);
    e1.display();
    cin>>e1.id;
    cout<<e1.id;
    e1.name = "Shihab";
    cout<<e1.name;

}
