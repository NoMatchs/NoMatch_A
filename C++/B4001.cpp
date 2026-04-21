#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (i * i * i == n)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}