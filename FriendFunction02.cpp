#include<iostream>
using namespace std;
class Calculator{
    private:
    int length;
    public:
    Calculator():length(0){}
    friend int add(Calculator);
};
int add(Calculator c){
    c.length +=10;
    return c.length;
}
int main(){
    Calculator c;
    cout<<add(c);
}
