#include<iostream>
using namespace std;
int largestNumber(int number[5]){
    int largeNumber;
    for(int i=0;i<5;i++){
        if(number[i] > number[i+1]){
            largeNumber =number[i];
        }
    }
    return largeNumber;
}

int main(){
int number[] = {5,6,3,4,5};
cout<<largestNumber(number);

}
