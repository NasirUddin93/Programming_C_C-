#include<iostream>
using namespace std;
double power(double m,int n){
    double sum=1;
    if(n==0) return 1;
    else if(n==1) return m;
    else{
       for(int i=1;i<=n;i++){
            sum =sum * m;
        }
    }
    return sum;
}
int main(){
    int n;
    double m,r;
    cin>>m>>n;
    r = power(m,n);
    cout<<r;
}
