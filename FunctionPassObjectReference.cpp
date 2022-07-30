#include<iostream>
using namespace std;
class Address{
    public:
    int house = 30;
    int Road = 11;
    int Sector = 10;
    string city = "Uttara";
    string country = "Bangladesh";

};
void empAddress(int id, int salary, Address* address){
    cout<<id<<salary<<address->house<<address->Road<<address->Sector<<address->city<<address->country;
}
int main(){
    Address a;
    empAddress(101,50000,&a);

}
