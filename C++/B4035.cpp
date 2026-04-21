#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a % 9 == 0 && a % 8 != 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}