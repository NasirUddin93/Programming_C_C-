#include<iostream>
using namespace std;
int main(){
    int number[] = {5,3,6,7,8,3,4,2,3,4};
    for(int i=0; i<10; i++){
        cout<<"number["<<i<<"]"<<number[i]<<endl;
    }
     int updateNumber;
     cout<<"Enter a number:\n";
     cin>>updateNumber;
     int position;
     cout<<"Enter a index position:\n";
     cin>>position;
    for(int i=0; i< 10; i++){
        if(i == position){
            number[i] = updateNumber;
        }

    }
    for(int i=0; i<10; i++){
        cout<<"number["<<i<<"]"<<number[i]<<endl;
    }
}
