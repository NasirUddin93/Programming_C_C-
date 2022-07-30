#include<iostream>
using namespace std;
class classY;             //forward declaration
class classX{
    int digit1;
    friend class classY;
    public:
    classX():digit1(10){}
};
class classY{
    int digit2;
    public:
    classY():digit2(5){}

    int multify(){
        classX m;
        return m.digit1 * digit2;
    }
};
int main(){
    classY n;
    cout<<n.multify();

}
