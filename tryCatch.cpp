#include<iostream>
using namespace std;
int main(){
    try{
        int age = 15;
        if(age >= 18){
            cout<<"Enter is permited"<<endl;
        }else{
            throw(age);
        }
    }
    catch(int myNum){
        cout<<"Access is denailed"<<endl;
        cout<<"Your age is:"<<myNum<<endl;
    }

}
