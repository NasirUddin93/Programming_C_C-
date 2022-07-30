#include<iostream>
using namespace std;
class Person{
    public:
    int nid;
    string name;
    string Address;
    string contact;
    void displayName(){
        cout<<"Neme";
    }
};
int main(){
    Person p1;
    p1.nid = 10;
    p1.displayName();
    p1.name = "Shihab";
    cout<<p1.nid;
    cout<<p1.name;

}
