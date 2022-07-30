#include<iostream>
using namespace std;
class Sample{
    int length,breadth;
    public:
    Sample(int length,int breadth):length(length),breadth(breadth){}
    friend void calArea(Sample s);
};
void calArea(Sample s){
    cout<<s.length<<" "<<s.breadth;
}
int main(){
    Sample s(101,103);
    calArea(s);

}
