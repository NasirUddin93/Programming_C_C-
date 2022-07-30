#include<iostream>
using namespace std;
int main(){

 cout<<"Enter array size:\n";
 int numberofElements;
 cin>>numberofElements;
 int number[numberofElements];

 for(int i=0;i<numberofElements;i++){
cout<<"number["<<i<<"] = ";
 cin>>number[i];
 }
cout<<"Array Elements are:\n";
for(int i=0;i<numberofElements;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
 }


}
