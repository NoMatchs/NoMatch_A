#include <iostream>

using namespace std;

int main()
{
    int k, l, r;
    cin >> k >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % k == 0 || i % 10 == k)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}