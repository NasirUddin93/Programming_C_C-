#include<iostream>
using namespace std;
class Employee{
    public:
    int id = 1010;
    string name = "Nadim";
};
void displayName(Employee e){
    cout<<e.id<<" "<<e.name;
}
int main(){
    Employee obj;
    displayName(obj);

}
