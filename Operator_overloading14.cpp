#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l,b;
    Rectangle(){l=0;b=0;}
    void operator ++(){
        l+=2;
        b+=2;
    }
    void disply(){
        cout<<"L: "<<l<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main(){
    Rectangle r;
    cout<<"Before overloading function"<<endl;
    r.disply();
    ++r;
    r.disply();
    cout<<"After overloading function"<<endl;
}
