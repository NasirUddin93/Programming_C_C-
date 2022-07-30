#include<iostream>
using namespace std;
class Factorial{
    public:
    Factorial(int n){
        int fact=1;
        for(int i=n;i>0;i--){
            fact *= i;
        }
        cout<<fact;
    }
};
int main(){
    int n;
    cin>>n;
    Factorial f(n);
}
