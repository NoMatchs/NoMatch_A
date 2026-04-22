#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    char c;
    for(char& c : s)
    {
        if(c >= 'b' && c <= 'z')
        {
            c -= 1;
        }
        else if(c >= 'B' && c <= 'Z')
        {
            c -= 1;
        }
        else if(c == 'a')
        {
            c = 'z';
        }
        else if(c == 'A')
        {
            c = 'Z';
        }
    }

    cout << s << endl;
    return 0;
}