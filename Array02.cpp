#include<iostream>
using namespace std;
int main(){
int MaxElement;
cin>>MaxElement;
int number[MaxElement];
for(int i=0;i<MaxElement;i++){
cin>>number[i];
}


for(int i=0; i<MaxElement;i++){
cout<<number[i]<<"\n";

}
return 0;
}
