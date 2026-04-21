#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int sum = 0;
    if (y % x > 0)
    {
        sum = y / x + 1;
    }
    else
    {
        sum = y / x;
    }
    int res = n - sum;
    cout << res << endl;
    ;
    return 0;
}