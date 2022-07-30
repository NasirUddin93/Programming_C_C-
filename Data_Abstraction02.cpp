#include<iostream>
using namespace std;
class SmartPhone{
    public:
    virtual void call() = 0;
    virtual void sms() = 0;
    virtual void selfie() = 0;
};
class IPhone:public SmartPhone{
    public:
    void call(){
        cout<<"I am calling"<<endl;
    }
    void sms(){
        cout<<"I am doign sms"<<endl;
    }
    void selfie(){
        cout<<"I am taking selfie"<<endl;
    }
};
int main(){
    SmartPhone *sp = new IPhone();
    sp->call();
    sp->sms();
    sp->selfie();

}
