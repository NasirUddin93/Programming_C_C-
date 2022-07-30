#include <iostream>
#include <ctime>
using namespace std;
int main() {

   time_t time_now = time(0);
   tm *l_time = localtime(&time_now);


   cout << "Time: ";
   cout << l_time->tm_hour << ":";
   cout << l_time->tm_min << ":";
   cout << l_time->tm_sec << endl;
}
