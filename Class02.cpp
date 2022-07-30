#include<iostream>
using namespace std;
class Person{
    public:
    int sl;
    string name;
    string contact;
    string address;
};

int main(){
 Person obj1;
 obj1.sl = 101;
 obj1.name = "Nadim";
 obj1.contact = "01681363517";
 obj1.address = "Uttara";

 cout<<obj1.sl;
 cout<<obj1.name;
 cout<<obj1.contact;
 cout<<obj1.address<<"\n";

 Person person2;
 person2.sl = 102;
 person2.name = "Nirjona";
 person2.contact = "93898493489";
 person2.address = "Uttara";

 cout<<person2.sl<<" "<<person2.name<<" "<<person2.contact<<" "<<person2.address<<"\n";

  string name3;

  Person person3;
  person3.sl = 103;
  name3 = person3.name = "Shihab";
  person3.contact = "3874934839";
  person3.address = "Gazipur";
 cout<<person3.sl<<" "<<person3.name<<" "<<person3.contact<<" "<<person3.address;
 cout<<name3;
}
