
#include<iostream>
using namespace std;
int main(){
    int number[]={5,4,3,5,7,8};
    for(int i=0;i<6;i++){
        cout<<number[i]<<"\n";
    }
    int serachNumber;
    cin>>serachNumber;
    cout<<serachNumber;
    bool searchValue;
    for(int i=0;i<6;i++){
        if(number[i] == serachNumber){
            searchValue = 1;
        }

    }
    if(searchValue == 1)
    cout<<"Yes";
     else
     cout<<"No";

}
