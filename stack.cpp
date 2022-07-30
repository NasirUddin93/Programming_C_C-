#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> stack;
    stack.push(50);
    stack.push(60);
    stack.push(12);
    stack.push(17);
    stack.push(60);
    while(!stack.empty()){
        cout<<" "<<stack.top();
        stack.pop();

    }

}
