#include<iostream>
using namespace std;
class Person{

    public:
    string name;
    int age;
    void address(string area){
        cout<<"Uttara Dhaka-1230"<<area;
    }
};

int main(){
Person obj;
Person obj1;
obj.name = "Kadir";
obj1.name = "Shamim";
cout<<obj.name;
cout<<obj1.name;
obj1.address("Kishoregonj");

}
