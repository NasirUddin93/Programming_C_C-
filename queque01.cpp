#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");
    q.push("E");
    q.emplace("F");
    cout<<q.front();
    cout<<q.back();
    cout<<q.size();
    q.pop();
    q.pop();
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}
