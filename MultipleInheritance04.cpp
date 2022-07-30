#include<iostream>
using namespace std;

class A{
public:
    int x= 100;
};

class B{
 public:
     int y=200;
};

class C: public A, public B{
 public:
     int z=300;
};
int main(){
    C c;
    cout<<"x= "<<c.x<<endl;
    cout<<"Y= "<<c.y<<endl;
    cout<<"z= "<<c.z;
return 0;
}
