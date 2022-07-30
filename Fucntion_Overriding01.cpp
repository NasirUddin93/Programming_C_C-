#include<iostream>
using namespace std;
class Employee{
    public:
    void displayName(){
        cout<<"Name: Kadir"<<endl;
    }
};
class VP:public Employee{
    public:
    void displayName(){
        cout<<"Name: Masud Sir"<<endl;
    }
};
class DepHead:public Employee{
    public:
    void displayName(){
        cout<<"Name: Omar"<<endl;
    }
};

int main(){
    Employee e;
    e.displayName();
    VP v;
    v.displayName();
    DepHead d;
    d.displayName();
}
