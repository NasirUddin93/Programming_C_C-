#include<iostream>
using namespace std;
class Student{
    public:
    static int id;
    static void print(){
        cout<<"I am static method";
    }
};
int Student::id = 6;
int main(){
 cout<<Student::id;
 Student::print();
}
