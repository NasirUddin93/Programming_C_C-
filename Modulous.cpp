#include<iostream>
using namespace std;
class Fish{
    public:
    int height = 10;
    int weight;
    string color;
    int price;
    void eat(){
        cout<<"Fish is eating some foods"<<endl;
    }
    void sswimmingwimming(){
        cout<<"Fish is all time swimming in the wather"<<endl;
    }
};
class Puti:public Fish{
    public:
    void colorSet(){
        color = "Rupali";
        cout<<color;
    }
};
class Desh:public Puti{

};
class Sorputi:public Puti{
    void firming(){
        cout<<"Sorputi is firming in our country."<<endl;
    }
};


int main(){
    Puti p;
    p.eat();
    p.colorSet();
    Sorputi sp;

}
