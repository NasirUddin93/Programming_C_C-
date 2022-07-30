#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int paid,due;
    string id,name, comment;
    cout<<"ID: ";
    cin>>id;
    cout<<"Name: ";
    cin>>name;
    cout<<"Paid: ";
    cin>>paid;
    cout<<"Due: ";
    cin>>due;
    cout<<"Comment: ";
    cin>>comment;
    ofstream file("Student_info.txt");
    file<<"ID: "<<id<<endl;
    file<<"Name: "<<name<<endl;
    file<<"Paid: "<<paid<<endl;
    file<<"Due: "<<due<<endl;
    file<<"Total Amount: "<<paid+due<<endl;
    file<<"Comment: "<<comment<<endl;
    file.close();
}
