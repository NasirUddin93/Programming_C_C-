#include<iostream>
using namespace std;
class Teacher{
    public:
    int NID;
    string name;
    int basicSalary;
    Teacher(int NID,string name,int basicSalary):NID(NID),name(name),basicSalary(basicSalary){}
};
int main(){
    Teacher t(10029,"Shuvo",50000);
    cout<<t.NID;
    cout<<t.name;
    cout<<t.basicSalary;

}

