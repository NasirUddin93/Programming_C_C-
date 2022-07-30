#include<iostream>
using namespace std;
class Account{
    public:
    float salary =50000;
};
class Programmer: public Account{
    public:
    float bonus = 30000;
};
int main(){
    Programmer p;
    cout<<p.salary<<" "<<p.bonus;
}
