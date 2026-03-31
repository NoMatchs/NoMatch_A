#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    bool flag;
    for (int i = a; i <= b; i++)
    {
        if (i < 2)
        {
            continue;
        }
        flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}