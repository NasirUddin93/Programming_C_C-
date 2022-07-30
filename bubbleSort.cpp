#include<iostream>
using namespace std;
int main(){
    int temp;
    int A[] = {2,5,3,41,2,3,4,5,6,7,2,3,4,59,8};
    for(int i=0;i<16;i++){
        for(int j=0;j<15-i-1;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }

        }

    }
    cout<<"After bubble sort"<<endl;
    for(int i=0;i<15;i++){
        cout<<A[i]<<endl;
    }
}
