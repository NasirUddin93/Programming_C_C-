#include<iostream>
using namespace std;
int main(){
    int number[] = {4,3,5,7,8,3,4,5,10};
    for(int i=0;i<9;i++){
    cout<<"number["<<i<<"] = "<<number[i]<<"\n";
    }
    int indexNumber;
    int elementValue;
    cout<<"Enter index number to delete the array element:\n";
    cin>>indexNumber;
    for(int i=0;i<9;i++){
        if(i==indexNumber){
            for(int i= indexNumber;i<8;i++){
                number[i] = number[i+1];
            }
        }
    }
    for(int i=0;i<8;i++){
    cout<<"number["<<i<<"] = "<<number[i]<<"\n";
    }
}
