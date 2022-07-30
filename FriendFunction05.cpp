#include<iostream>
using namespace std;
class Employee{
    int id =101;
    friend void displyName(Employee e){
        cout<<"friend Function"<<e.id;
    }
};

int main(){
    Employee e;
    displyName(e);

}
