#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0;i < s.size(); i++)
    {
        if(s[i] == 'A')
        {
            cout << 'T' ;
        }
        if(s[i] == 'T')
        {
            cout << 'A';
        }
        if(s[i] == 'G')
        {
            cout << 'C';
        }
        if(s[i] == 'C')
        {
            cout << 'G';
        }
    }
    return 0;
}