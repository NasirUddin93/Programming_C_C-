#include<iostream>
using namespace std;
int main(){
    int number[] = {4,5,6,7,8,5,4,3,2,6};
    int updaeNumber;
    int indexNumber;
    cout<<"Enter a value and index number:\n";
    cin>>updaeNumber>>indexNumber;
    number[indexNumber] = updaeNumber;
    for(int i=0;i<10;i++){
        cout<<"number["<<i<<"] = "<<number[i]<<endl;
    }
}
