#include<iostream>
using namespace std;
class Addition{
    public:
    int add(){
        cout<<"add method is called"<<endl;
    }
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    Addition a;
    a.add();
    cout<<a.add(3,4)<<endl;
    cout<<a.add(3,4,8);
}
