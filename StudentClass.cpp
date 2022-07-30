#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;
    void insertt(int i,string n){
        id = i;
        name = n;
    }
    void display(){
        cout<<id<<" "<<name;
    }
};
int main(){
 Student s1;
 s1.insertt(101,"Nadim");
 s1.display();
}
