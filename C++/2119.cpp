#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string s ;
    cin >> s;
    if(s.size() >= 3 && s.substr(s.size() - 3) == "ing")
    {
        s = s.substr(0,s.size() - 3);
    }
    else if(s.size()>=2)
    {
        if(s.substr(s.size() - 2) == "er" || s.substr(s.size() - 2) == "ly")
        {
            s = s.substr(0,s.size()-2);
        }
    }
    cout << s << endl;
    return 0;
}