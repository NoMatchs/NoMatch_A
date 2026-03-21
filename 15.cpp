#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string res = "";
    int i = 0;
    int n = s.length();

    while(i < n)
    {
        if(s[i] == '6')
        {
            int count = 0;
            while(i < n && s[i] == '6')
            {
                count++;
                i++;
            }
            if(count > 9)
            {
                res += "27";
            }
            else if(count > 3)
            {
                res += '9';
            }
            else
            {
                for(int j = 0; j < count; j++)
                {
                    res += '6';
                }
            }
        }
        else
        {
            res += s[i];
            i++;
        }
    }
    cout << res << endl;
    return 0;
}