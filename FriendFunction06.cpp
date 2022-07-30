#include<iostream>
using namespace std;
class Employee{
    int id = 101;
    string name ="Megha";
    int salary =50000;
    friend void displyName(Employee e);

};
void displyName(Employee e){
    cout<<"friend Function"<<e.id;
}

int main(){
    Employee e;
    displyName(e);

}

