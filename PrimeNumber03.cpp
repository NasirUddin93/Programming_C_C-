#include<iostream>
using namespace std;
void primeList(int n){
    for(int num=1;num<=n;num++){
        bool prime = true;
        for(int i=2;i<=num/2;i++){
            if(num%i == 0){
                prime=false;
            }
        }
        if(prime){
            cout<<num<<", ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    primeList(n);
    return 0;
}
