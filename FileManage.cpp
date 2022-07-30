#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myFile("filename.txt");
    myFile<<"Files can be tricky, but it is fun enogh!";
    myFile.close();
}



