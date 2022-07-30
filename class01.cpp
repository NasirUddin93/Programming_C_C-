#include<iostream>
using namespace std;
class Person{
public:
    int id;
    string name;
    void salaryCalculation(int id);
    Person(){
        cout<<"constructor";
    }
};
void Person::salaryCalculation(int id){
    cout<<id;

}


int main(){
    Person p1;
    int id;
    cin>>id;
    p1.id = id;
    p1.salaryCalculation(p1.id);
}
