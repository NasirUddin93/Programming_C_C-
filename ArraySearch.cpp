#include<iostream>
using namespace std;
int main(){
int number[] ={5,6,4,6,7,8,3,2,8,9,21};
for(int i=0; i< 11;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}
int searchNumber;
bool found = 0;
cout<<"Enter a number to search in array:\n";
cin>>searchNumber;


for(int i=0;i<11;i++){
    if(number[i] == searchNumber){
        found = 1;
    }

}
if(found){
    cout<<"yes";
}
if(!found){
    cout<<"NO";
}


}
