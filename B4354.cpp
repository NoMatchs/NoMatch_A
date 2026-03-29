#include <iostream>

using namespace std;

int main()
{
    int n, k, t;
    cin >> n >> k >> t;

    double res = 0;
    res = k * t;
    if (res > n)
    {
        cout << n << endl;
    }
    else
    {
        cout << res << endl;
    }
    return 0;
}