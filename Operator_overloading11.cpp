#include<iostream>
using namespace std;
class Number{
    int x,y;
    public:
    Number(){x=0;y=0;}
    Number(int a,int b){x=a;y=b;}
    void addObj(Number ob);
};
void Number::addObj(Number ob){
    cout<<"x:"<<x<<", "<<"ob.x:"<<ob.x<<endl;
    cout<<"y:"<<y<<", "<<"ob.y:"<<ob.y<<endl;
    Number tmp;
    tmp.x = x+ob.x;
    tmp.y = y+ob.y;
    cout<<tmp.x<<tmp.y;
}
int main(){
    Number n1(5,6),n2(7,8),n3;
    n2.addObj(n1);
}
