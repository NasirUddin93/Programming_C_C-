#include<iostream>
using namespace std;
int main(){
    string name[] = {"Nadim","Shahib","Kadir","Abir"};
    for(int i=0;i<4;i++){
        cout<<name[i]<<"\n";
        }
    int index;
    cout<<"Enter index number to update the elements\n";
    cin>>index;
    cout<<index;
    cout<<"\nEnter value to update the elements\n";
    string updateName;
    cin>>updateName;
    cout<<updateName;
    for(int i=0;i<4;i++){
        if(i==index){
            name[i]=updateName;
        }
    }
    cout<<"After update Elements:\n";
    for(int i=0;i<4;i++){
        cout<<name[i]<<"\n";
        }

     return 0;
}
