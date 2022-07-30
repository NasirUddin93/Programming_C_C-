#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int basicSalary;
    public:
    void setValue(){
        id =101;
        name = "Shihab";
        basicSalary = 50000;
    }
};

void salary(Employee e){
    cout<<e.id;
}

int main(){
    Employee e;
    e.setValue();
    salary(e);

}
