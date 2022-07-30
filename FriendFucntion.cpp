#include<iostream>
using namespace std;
class Student{
    int a=6;
    int b=7;
    friend void displayName(Student s);
};
void displayName(Student s){
    cout<<s.a;
}
int main(){
Student s;
displayName(s);
}
