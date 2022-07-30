#include<iostream>
using namespace std;
void salaryCalculation(int id,string name,float basicSalary,bool attendance){
    float houseRent;
    float transportCost;
    houseRent = basicSalary * 0.5;
    transportCost = basicSalary * 0.1;
    if(attendance){
    cout<<basicSalary+houseRent+transportCost+500;
    }
     if(!attendance){
    cout<<basicSalary+houseRent+transportCost;
    }
}
int main(){
    int id;
    string name;
    float basicSalary;
    bool attendance;

    //---------------------------------------------------------
    cout<<"Enter ID,Name and Basic salary and Attendance:\n";
    cin>>id>>name>>basicSalary>>attendance;

    salaryCalculation(id,name,basicSalary,attendance);

}
