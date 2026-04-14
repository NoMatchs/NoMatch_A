#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool is_prime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};

    for (char c : s)
    {
        cnt[c - 'a']++;
    }

    int maxn = 0, minn = 100;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
            continue;
        maxn = max(maxn, cnt[i]);
        minn = min(minn, cnt[i]);
    }
    int d = maxn - minn;
    if (is_prime(d))
    {
        cout << "Lucky Word" << endl;
        cout << d << endl;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}