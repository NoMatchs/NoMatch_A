#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        for(int i = 0;i < s.size();i++)
        {
            if(i == 0)
            {
                if(isalpha(s[i]))
                {
                    s[i] = toupper(s[i]);
                }
            }
            else
            {
                if(isalpha(s[i]))
                {
                    s[i] = tolower(s[i]);
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}