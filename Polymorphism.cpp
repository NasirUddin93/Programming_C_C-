#include<iostream>
using namespace std;
int add(int a,int b){
    int r;
    r= a+b;
    return r;
}
int add(int a,int b,int c){
    int r;
    r= a+b+c;
    return r;
}
int add(int a,int b,int c,int d){
    int r;
    r= a+b+c+d;
    return r;
}

int main(){
cout<<add(5,6);
cout<<add(5,6,7);
cout<<add(5,6,7,3);

}
