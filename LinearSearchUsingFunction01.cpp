#include<iostream>
using namespace std;
int linearSearch(int number[],int arraySize,int searchNumber){
    int countt=0;
    for(int i=0;i<arraySize;i++){
        if(number[i]== searchNumber){
            countt=countt+1;
        }
    }
    if(countt){
        return countt;
    }else{
        return -1;
    }
}
int main(){
    int number[] ={2,3,4,2,1,5,6,7,4,2,5,2,2,2,2,2,7,8};
    int arraySize;
    arraySize = sizeof(number)/sizeof(number[0]);
    int searchNumber;
    cin>>searchNumber;
    int result;
    result=linearSearch(number,arraySize,searchNumber);
    (result==-1)?cout<<"Not found":cout<<"Number is found in array:"<<result<<"times";
}
