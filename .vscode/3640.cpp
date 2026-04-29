#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    vector<string> v;
    string s;

    while(cin >> s)
    {
        v.push_back(s);
    }
    for(auto& w : v)
    {
        bool num = true,low = true,up = true;
        for(char c : w)
        {
            if(!isdigit(c))
            {
                num = false;
            }
            if(!islower(c))
            {
                low = false;
            }
            if(!isupper(c))
            {
                up = false;
            }
        }
        if(num)
        {
            reverse(w.begin(),w.end());
        }
        else if(low)
        {
            for(char& c : w) c = toupper(c);
        }
        else if(up)
        {
            for(char& c : w) c = tolower(c);
        }
    }
    reverse(v.begin(),v.end());
    for(auto a : v)
    {
        cout << a << " ";
    }
    return 0;
}