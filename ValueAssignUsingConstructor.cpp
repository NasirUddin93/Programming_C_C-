#include<iostream>
using namespace std;
class Teacher{
    public:
    int NID;
    string name;
    int basicSalary;
    int setValue(int nid,string name, int bs){
        NID =nid;
        this->name = name;
        basicSalary = bs;
    }

};

int main(){
    Teacher t;
    t.setValue(10029,"Shuvo",50000);
    cout<<t.NID;
    cout<<t.name;
    cout<<t.basicSalary;

}
