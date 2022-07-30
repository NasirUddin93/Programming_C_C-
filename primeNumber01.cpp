#include<iostream>
using namespace std;
class Prime{
    public:
    bool primeChecker(int n){
        bool prime = true;
        for(int i=2;i<n;i++){
            if(n%i == 0){
                prime = false;
            }
        }
        return prime;
    }
};
int main(){
    Prime p;
    int n;
    cin>>n;
    if(p.primeChecker(n)){
        cout<<"prime";
    }else{
        cout<<"Not prime";
    }
}

