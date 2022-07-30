#include<iostream>
using namespace std;
int main(){

int maxElement;
cout<<"Enter number of array elements:\n";
cin>>maxElement;
    string name[maxElement];
cout<<"Enter "<<maxElement<<" names:\n";
 for(int i=0;i<maxElement;i++){
    cin>>name[i];
 }

 for(int i=0;i<maxElement;i++){
    cout<<name[i];
 }

}
