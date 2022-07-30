#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    Employee():id(10){}
};


int main(){
    Employee e;
    cout<<e.id;

}
