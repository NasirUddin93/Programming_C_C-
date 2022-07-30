#include<iostream>
using namespace std;
class Factorial{
    int f,n,i=0;
    public:
    Factorial(){
        cout<<"Enter a number";
        cin>>n;
        for(i=1;i<=n;i++){
            f = f*i;
        }
    }
    void display(){
        cout<<f;
    }
};

int main(){
    Factorial f;
    f.display();
}
