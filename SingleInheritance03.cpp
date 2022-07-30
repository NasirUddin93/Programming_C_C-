#include<iostream>
using namespace std;
class Accounts{
    int NID = 3303094949;
    string name = "Shihab";
    protected:
    int salary = 50000;
    int bonus = 5000;
    public:
    string address = "Uttara";
    string contact = "017077664737";
    void displayRecord(){
        cout<<NID;
        cout<<name;
        cout<<salary;
        cout<<bonus;
        cout<<address;
        cout<<contact;
    }

};
class Employee:public Accounts{
    public:
    void display(){
        cout<<salary;
        cout<<bonus;
    }
};
int main(){
    Employee e;
    e.display();
    Accounts a;
    a.displayRecord();
}
