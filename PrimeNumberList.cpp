#include<iostream>
using namespace std;
int primeChecker(int number){
    bool prime = true;
    for(int i=2;i<number/2;i++){
        if(number%i==0){
            prime = false;
        }
    }
    return prime;
}

int main(){
    int number;
    cin>>number;
    for(int i=1;i<number;i++){
        if(primeChecker(i)==1){
            cout<<i<<", ";
        }
    }
}
