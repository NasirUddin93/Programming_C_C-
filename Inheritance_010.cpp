#include<iostream>
using namespace std;
class Person{
    string name;
    public:
    void setName(string n){
        name = n;
    }
    void eat(){
        cout<<name<<" vat khai..."<<endl;
    }
};
class Student :public Person{
    int id;
    string className;
};

int main(){
    Student s;
    s.setName("Nadim");
    s.eat();
}
