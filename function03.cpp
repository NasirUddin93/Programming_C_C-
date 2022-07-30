#include<iostream>
using namespace std;
void salaryCalculation(int id,string name,float salary,bool hundredPercentAttendance){

float houseRent,transpost;
 houseRent = salary * 0.5;
    transpost = salary * 0.1;

    if(hundredPercentAttendance){
        salary = salary + houseRent + transpost + 500;

    }
    if(!hundredPercentAttendance){
        salary = salary + houseRent + transpost;

    }

    cout<<id<<" "<<name<<" "<<salary<<"\n";

}

int main(){


    int id;
    string name;
    float salary;
    bool hundredPercentAttendance;


    cout<<"Enter ID "<<"and  Name"<<" and Basic Salary"<<"100% Attendance or Not?\n";
    cin>>id>>name>>salary>>hundredPercentAttendance;
    salaryCalculation(id,name,salary,hundredPercentAttendance);
    cout<<"Enter ID "<<"and  Name"<<" and Basic Salary"<<"100% Attendance or Not?\n";
    cin>>id>>name>>salary>>hundredPercentAttendance;
    salaryCalculation(id,name,salary,hundredPercentAttendance);


}
