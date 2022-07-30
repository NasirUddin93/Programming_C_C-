#include<iostream>
using namespace std;
class Student{
    int a,b;
    public:
    void set_value(){
        a=5;
        b=6;
    }
    friend void print(Student s);
};
void print(Student s){
    cout<<"Friend Function"<<s.a;
}
int main(){
    Student s;
    s.set_value();
    print(s);

}
