#include<iostream>
#include<string>
using namespace std;
struct YoutubeChannel{
    string Name;
    int SubscribersCount;

    YoutubeChannel(string name,int subscribersCount){
        Name = name;
        SubscribersCount=subscribersCount;
    }

};
void operator<<(ostream& COUT,YoutubeChannel& ytChannel){
        COUT<<"name"<<ytChannel.Name<<endl;
        COUT<<"Subscribers"<<ytChannel.SubscribersCount<<endl;
}

int main(){
    YoutubeChannel yt1 = YoutubeChannel("CodeBeauty",75000);
    count<<yt1;
}
