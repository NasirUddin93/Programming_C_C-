#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> myStack;
myStack.push("Aboni");
myStack.push("Aroni");
myStack.push("Diti");
myStack.push("Sazzad");
    myStack.pop();
myStack.push("Sonia");
myStack.push("Khaled");
myStack.push("Shill");
while(!myStack.empty()){
    cout<<myStack.top()<<endl;
    myStack.pop();

}

}
