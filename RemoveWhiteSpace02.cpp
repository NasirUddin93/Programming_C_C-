#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s.erase(remove_if(s.begin(), s.end(),
                            [](char c) {
                                return (c == ' ' || c == '\n' || c == '\r' ||
                                        c == '\t' || c == '\v' || c == '\f');
                            }),
                            s.end());
    cout << s;

    return 0;
}
