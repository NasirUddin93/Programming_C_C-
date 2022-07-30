#include<iostream>
using namespace std;
void math_func(int n){
    float sum=1,i,k;
    for(i=1;i<=n;i++){
        k = pow(1/i;i);
        sum += k;
    }
    cout<<sum;
}
int main(){
    int n=4;
    math_func(n);

}
