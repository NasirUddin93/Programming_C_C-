#include<iostream>
using namespace std;
class Student{
        public:
        int id;
        string name;
        int Salary(int basicSalary,bool attendance){
            float houseRent = basicSalary * 0.1;
            float transport = basicSalary * 0.5;
            float totoalSalary;
            if(attendance){
                totoalSalary = basicSalary + houseRent + transport + 500;
            }else{
                totoalSalary = basicSalary + houseRent + transport;
            }
            return totoalSalary;
        }
};
int main(){
    Student s;
    cout<<"Enter Id, Name, Basic Salary and Attendance:\n";
    cin>>s.id;
    cin>>s.name;
    int basicSalary;
    cin>>basicSalary;
    bool attendance;
    cout<<s.Salary(basicSalary,attendance);
}
