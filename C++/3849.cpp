#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    string res;
    while (n > 0)
    {
        int rem = n % r;
        if (rem < 10)
        {
            res += (char)('0' + rem);
        }
        else
        {
            res += (char)('A' + (rem - 10));
        }
        n = n / r;
    }

    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}