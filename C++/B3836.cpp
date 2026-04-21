#include <iostream>

using namespace std;

int main()
{
    int x, y, z, n, m;
    cin >> x >> y >> z >> n >> m;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int k = m - i - j;
            if (i * x + j * y + k / z == n && k % z == 0)
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}