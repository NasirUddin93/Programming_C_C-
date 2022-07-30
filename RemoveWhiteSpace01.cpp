#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(!isspace(str[i]) && str.find('\t') != string::npos){
            cout<<str[i];
        }

    }
}
