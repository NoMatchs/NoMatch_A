#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count[26] = {0};

    for(char c: s)
    {
        count[c - 'a']++;
    }
    for(char c : s)
    {
        if(count[c - 'a'] == 1)
        {
            cout << c << endl;
            return 0;
        }
        
    }
    cout << "no" << endl;
    return 0;
}