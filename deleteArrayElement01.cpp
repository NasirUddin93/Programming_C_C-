#include<iostream>
using namespace std;
int main(){
    int number[] = {2,3,4,5,6,67,7,8,4,33,3};
    for(int i=0; i<11;i++){
        cout<<"number["<<i<<"] = "<<number[i]<<endl;
    }
    int index;
    cin>>index;
    if(index > 11){
        cout<<"Out of range ";
    }else{


    for(int i=0;i<11;i++){
        if(i==index){
            for(int j=index; j<11;j++){
                number[j] = number[j+1];

            }
        }

    }
    for(int i=0; i<10;i++){
        cout<<"number["<<i<<"] = "<<number[i]<<endl;

    }
    }

}
