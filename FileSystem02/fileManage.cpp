#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("file1.txt");
    file<<"This is my file one,I have ceated it from program"<<endl;
    file<<"This is my file one2,I have ceated it from program"<<endl;
    file.close();
}
