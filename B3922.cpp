#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        if (i % m == 0)
        {
            flag = false;
        }
        if (flag)
        {
            cout << i << endl;
            ;
        }
    }
    return 0;
}