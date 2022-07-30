#include<iostream>
using namespace std;
class Geometry{
    float area;
    float b=5;
    float h=3;
    float pi = 3.14;
    int r = 2;
    public:
    float triangle(){
        return area = .5*b*h;
    }
    float triangle(int b){
        return area = .5*b*h;
    }
    float triangle(int b,int h){
        return area = .5*b*h;
    }
    float circle(){
        return pi*r*r;
    }
    float circle(int r){
        return pi*r*r;
    }
    float rectangle(){
        return h*b;
    }
    float rectangle(int h){
        return h*b;
    }
    float rectangle(int h,int b){
        return h*b;
    }
};
int main(){
    Geometry g;
    cout<<g.triangle()<<endl;
    cout<<g.triangle(1)<<endl;
    cout<<g.triangle(1,5)<<endl;
    cout<<g.circle()<<endl;
    cout<<g.circle(3)<<endl;
    cout<<g.rectangle()<<endl;
    cout<<g.rectangle(4)<<endl;
    cout<<g.rectangle(4,7)<<endl;
}
