#include<iostream>
using namespace std;
int main(){
int number[] = {2,3,4,6,1,2,4,5,6,7};
for(int i=0;i<10;i++){
if(number[0] > number[i]){
number[0]=number[i];
}
}
cout<<number[0];
}
