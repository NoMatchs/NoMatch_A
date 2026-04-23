#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    bool first = true;
    while(cin >> s)
    {
        if(!first )
        {
            cout << ",";
        }
        cout << s.size();
        first = false;
    }
    return 0;
}