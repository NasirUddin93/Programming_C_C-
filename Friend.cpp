#include<iostream>
using namespace std;
class Student{
    private:
    int id =101;
    string name = "Nadim";
    friend void displyName(Student s){
        cout<<s.name;
    }
};
int main(){
    Student s;
    displyName(s);

}
