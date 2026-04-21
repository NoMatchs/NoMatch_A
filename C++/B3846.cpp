#include <iostream>

using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l + 1; i < r; i++)
    {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}