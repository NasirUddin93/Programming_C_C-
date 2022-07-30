#include<iostream>
using namespace std;
class Addition{
    public:
    int add(){
        return 0;
    }
    int add(int a,int b){
        return a+b;
    }
   double add(double a,double b){
        return a+b;
    }
   double add(int a,double b){
        return a+b;
    }
   double add(double a,int b){
        return a+b;
    }


    int add(int a,int b,int c){
        return a+b+c;
    }


};

int main(){
    Addition a;
    cout<<a.add(10,60.4567);
}
