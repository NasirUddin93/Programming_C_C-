#include<iostream>
using namespace std;
class Factorial{
    public:
    int n,i,fact=1;
    Factorial(){
        cin>>n;
        for(i=n;i>0;i--){
            fact *=i;
        }
        cout<<fact;
    }
};
int main(){
    Factorial f;
}
