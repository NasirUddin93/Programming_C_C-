#include<iostream>
using namespace std;
class Area{
    public:
    void triangle(){
        cout<<"You have not entered any value"<<endl;
    }
    void triangle(int base){
        cout<<"You have entered base value:"<<base<<endl;
    }
    void triangle(int base,int height){
        cout<<"Area of Triangle: "<<(base*height)/2<<endl;
    }
    void triangle(double base,double height){
        cout<<"Area of Triangle: "<<(base*height)/2<<endl;
    }
    void circle(int radius){
        cout<<3.1416*radius*radius<<"m^2"<<endl;
    }
   void circle(double radius){
        cout<<3.1416*radius*radius<<"m^2"<<endl;
    }
   void rectangle(double length,double width){
        cout<<"Area of rectangle: "<<length*width<<"m^2"<<endl;
    }
   void rectangle(int length,double width){
        cout<<"Area of rectangle: "<<length*width<<"m^2"<<endl;
    }

};
int main(){
    Area a;
    a.triangle();
    a.triangle(10);
    a.triangle(10,7);
    a.triangle(10.4,7.6);
    a.circle(7);
    a.circle(7.5);
    a.rectangle(7.5,76.4);
}
