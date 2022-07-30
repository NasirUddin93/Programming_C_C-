#include<iostream>
using namespace std;
int main(){
    int number[] = {3,4,5,3,4,5,7,8,94,5,3};
    for(int i=0; i<11;i++){
        cout<<"number["<<i<<"] = "<<number[i]<<endl;
    }
    int index;
    cout<<"Enter a index number to delete array Element:\n";
    cin>>index;
    for(int i=0; i<11;i++){
        if(i == index){
            for(int j=index;j<11;j++){
                number[j] = number[j+1];

            }
        }

    }
    for(int i=0; i<10;i++){
        cout<<"number["<<i<<"] = "<<number[i]<<endl;
    }
}
