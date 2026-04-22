#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(char& c : s)
    {
        if(islower(c))
        {
            c = toupper(c);
        }
        else if(isupper(c))
        {
            c = tolower(c);
        }
    }
    reverse(s.begin(),s.end());

    for(char &c : s)
    {
        if(islower(c))
        {
            c += 3;
            if(c > 'z')
            {
                c -= 26;
            }
        }
        else if(isupper(c))
        {
            c += 3;
            if(c > 'Z')
            {
                c -= 26;
            }
        }
    }
    cout << s << endl;
    return 0;
}