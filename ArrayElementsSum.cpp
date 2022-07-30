#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int number[] = {2,3,4,5,6,7,8,6};
    for(int i=0;i<8;i++){
        sum += number[i];
    }
    cout<<sum;

}
