#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    bool prime = true;

    for(int j=1;j<number;j++){
        for(int i=2;i<j;i++){
            if(j%i == 0){
                prime = false;

            }

        }

        if(prime){
            cout<<j<<endl;
        }
    }

}
