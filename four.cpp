#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<string> pin = {
        "ling", "yi", "er", "san", "si" ,
        "wu", "liu", "qi", "ba", "jiu"
    };

    int start = 0;
    if(s[0] == '-')
    {
        cout << "fu";
        start = 1;

        // if(start < s.length())
        // {
        //     cout << " ";
        // }
    }

    for(int i = start; i < s.length(); i++)
    {
        int digit = s[i] - '0';
        cout << pin[digit];

        if(i < s.length() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}