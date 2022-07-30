#include<iostream>
using namespace std;
int main(){
int number[] = {5,4,3,2,6,7,8,9,1};
for(int i=0;i<9;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}
int index;
cout<<"Enter index number to delete the element of Array:\n";
cin>>index;
for(int i=0;i<9;i++){
if(i == index){
    for(int i = index; i<9; i++)
    number[i] =  number[i+1];
}
}

for(int i=0;i<8;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}
}
