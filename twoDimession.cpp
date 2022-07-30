#include<iostream>
using namespace std;
int main(){
    int number[3][3];
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>number[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<number[i][j]<<"  ";
        }
        cout<<endl;
    }



}
