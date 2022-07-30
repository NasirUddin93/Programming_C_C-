#include<iostream>
using namespace std;
int main(){
   try{
        int age = 25;
        if(age >= 18){
            cout<<"Access is granted"<<endl;
        }else{
            throw(age);
        }
   }catch(int age){
        cout<<"Your access is not granted"<<endl;
        cout<<"Because your age is "<<age<<endl;
   }

   return 0;
}
