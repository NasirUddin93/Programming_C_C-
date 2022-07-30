#include<iostream>
using namespace std;
class SmartPhone{
    public:
    virtual void call() = 0;
    virtual void sms() = 0;
};
class Iphone:public SmartPhone{
    public:
    virtual void call(){
        cout<<"I am call"<<endl;
    }
    virtual void sms(){
        cout<<"I am SMS"<<endl;
    }

};


int main(){
//    Iphone ip;
//    ip.call();
//    ip.sms();
        SmartPhone* s1 = new Iphone();
        s1->call();
        s1->sms();

}
