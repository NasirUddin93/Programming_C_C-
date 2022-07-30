#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ifstream file1("file1.txt");
    char c;
    char c1[200];
    int i=0;
    while(file1.good()){

        c = file1.get();
        c1[i] = c;
        i++;
        cout<<c;
    }
    file1.close();
    ofstream file2("file2.txt");
    for(int j=0;j<=i;j++){
        file2<<c1[j];
    }
    return 0;
}
