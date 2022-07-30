#include<iostream>
using namespace std;
int main(){
    string name[] = {"Nadim","Shihab","Soha","Abir","Kadir"};
    for(int i=0;i<5;i++){
        cout<<name[i]<<"\n";
    }
    int index;
    cout<<"Enter index to delete the element\n";
    cin>>index;

    for(int i=0;i<5;i++){
        if(i==index){
            for(int j=index;j<4;j++)
            name[j] = name[j+1];
        }
    }
    cout<<"After Delete array elemets are:\n";
    for(int i=0;i<4;i++){
        cout<<name[i]<<"\n";
    }
    return 0;
}
