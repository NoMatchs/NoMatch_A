#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    while (n--)
    {
        cin >> a;
        if (a % 10 >= 5)
        {
            a -= a % 10;
            a += 10;
        }
        else
        {
            a -= a % 10;
        }
        cout << a << endl;
    }
    return 0;
}