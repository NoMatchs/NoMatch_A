#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;
    if(k == 1)
    {
        cout << s[0] << endl;
        return 0;
    }

    int count = 1;
    for(int i = 1;i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            count++;
            if(count >= k )
            {
                cout << s[i] << endl;
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    return 0;
}