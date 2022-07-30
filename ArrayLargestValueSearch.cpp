
#include<iostream>
using namespace std;
int main(){
int number[] ={5,6,4,6,7,8,3,2,8,9,21};
for(int i=0; i< 11;i++){
cout<<"number["<<i<<"] = "<<number[i]<<"\n";
}
int temp = 0;


for(int i=0;i<11;i++){
    if(number[0] > number[i+1]){
        number[0] = number[i];
    }

}
cout<<number[0];


}
