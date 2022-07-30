#include<iostream>
using namespace std;
class classX{
    int num1 =10;
    friend class classY;
};
class classY{
    int num2 = 20;
    public:
    int multiply(){
        classX m;
        return m.num1 * num2;
    }


};

int main(){
    classY n;
    cout<<n.multiply();

}
