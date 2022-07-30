#include<iostream>
using namespace std;
class Adder{
    int total;
    public:
    Adder(int i=0){
        total = i;
    }
    void addNum(int number){
        total +=number;
    }
    int getTotal(){
        return total;
    }
};


int main(){
    Adder a;
    a.addNum(50);
    a.addNum(50);
    a.addNum(50);
    cout<<"Tatal = "<<a.getTotal()<<endl;
}
