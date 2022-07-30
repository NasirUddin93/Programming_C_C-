#include<iostream>
using namespace std;
double division(double numerator,double denominator){
    return numerator/denominator;
}
int main(){
    try{
        int n,d;
        cin>>n>>d;
        if(d==0){
            throw d;
        }else{
            cout<<division(n,d);
        }

    }catch(int d){
        cout<<"Denominator is "<<d<<" that is invalid! "<<endl;
    }
}
