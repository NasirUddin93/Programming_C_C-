#include<iostream>
using namespace std;
int main(){

int number[] = {2,6,8,7,49,46,30,40,39,23,1,2};
for(int i=0;i<12;i++){
 cout<<"number["<<i<<"]= "<<number[i]<<"\n";

}
int searchNumber;
cout<<"Enter a number:\n";
cin>>searchNumber;
for(int i=0;i<12;i++){
 if(number[i]==searchNumber){
    cout<<"yes";
 }

}


}
