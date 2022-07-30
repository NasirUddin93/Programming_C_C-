#include<iostream>
using namespace std;
int main(){
int number[] = {4,3,5,6,1};
for(int i=0;i<5;i++){
if(number[0]>number[i]){
number[0]=number[i];

}

}
cout<<number[0];


}
