#include<iostream>
using namespace std;
int sum(int num){
 if(num != 1){
  return num * sum(num - 1);
 }
return num;
}
int main(){
cout<<sum(5);
}
