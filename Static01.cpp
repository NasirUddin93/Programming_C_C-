#include<iostream>
using namespace std;
class Employee{
    public:
    static int id;
    static void displayName(){
        cout<<"Rahim";
    }
};
int Employee::id = 10;
int main(){
    Employee::displayName();
    cout<<Employee::id;


}
