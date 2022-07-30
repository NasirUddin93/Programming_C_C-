#include<iostream>
using namespace std;
int main(){
int number[] = {5,3,2,6,7,8,4,8,9};

for(int i=0;i<9;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}
int newElement;
int index;

cout<<"Enter index and new element to update\n";
cin>>index>>newElement;

for(int i=0;i<9;i++){
if(i == index){
    number[i] = newElement;
}
}

for(int i=0;i<9;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}


}
