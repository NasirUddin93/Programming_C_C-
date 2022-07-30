#include<iostream>
using namespace std;
class Fact{
    public:
        int f=1;
    Fact(int n){
        for(int i=1;i<=n;i++){
            f *= i;
        }
        cout<<f;
    }
};
int main(){
    int n;
    cin>>n;
    Fact obj(n);
}
