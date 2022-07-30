#include<iostream>
using namespace std;
class Factorial{
    int n=0,i=0,fact=1;
    public:
    Factorial(){
        cout<<"Enter a number:"<<endl;
        cin>>n;
        for(i=n;i>0;i--){
            fact *= i;
        }

    }
    void display(){
        cout<<fact;
    }
};

int main(){
    Factorial f;
    f.display();

}
