#include<iostream>
using namespace std;
class Prime{
    public:
    bool prime = true;
    int primeChecker(int n){
        for(int i=n;i>n/2;i--){
            if(n%i==0){
                prime = false;
            }
        }
        return prime;
    }
};
int main(){
    int n=0;
    cin>>n;
    Prime p;
    int prime = p.primeChecker(n);
    if(prime){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
}
