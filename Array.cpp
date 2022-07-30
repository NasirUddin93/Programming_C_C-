#include<iostream>
using namespace std;
int main(){
    int ElementNumber;
    cout<<"Enter number of array Elements:\n";
    cin>>ElementNumber;
    string name[ElementNumber];
    cout<<"Enter Arrary Elements:\n";
    for(int i=0;i<ElementNumber;i++){
     cout<<"name["<<i<<"] = ";
     cin>>name[i];
    }
    cout<<"Array Elements are:\n";
    for(int i=0;i<ElementNumber;i++){
     cout<<"name["<<i<<"] = "<<name[i]+"\n";
    }
    return 0;
}

