#include<iostream>
using namespace std;

int main(){
int MAX;
cout<<"Enter number of array Element:\n";
cin>>MAX;
int number[MAX];
for(int i=0;i<MAX;i++){
    cout<<"number["<<i<<"] = ";
    cin>>number[i];
}
cout<<"Array Elements are:\n";
for(int i=0;i<MAX;i++){
    cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}


}
