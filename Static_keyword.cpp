#include<iostream>
using namespace std;
class Student{
    public:
    static int id;
    static void display(){
        cout<<"Welcome to static method";
    }
};
int Student::id = 5;
int main(){
    cout<<Student::id<<endl;
    Student::display();
}
