#include<iostream>
using namespace std;
int main(){
    string name[] = {"Nadim","Shihab","Nadim","Megha","Tonmoy"};
    string searchName;
    cin>>searchName;
    bool found = false;
    for(int i=0;i<5;i++){
        if(name[i] == searchName){
            found = true;
        }
    }
    if(found){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}
