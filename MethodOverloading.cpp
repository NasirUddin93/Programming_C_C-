#include<iostream>
using namespace std;
int rectangle(int l,int w){
    return l*w;
}
double rectangle(int l,float w){
    return l*w;
}
double rectangle(double l,double w){
    return l*w;
}

int main(){
    int l;
    float w;
    cin>>l>>w;
    cout<<rectangle(l,w);

}
