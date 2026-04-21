#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    for (int res : arr)
    {
        if (res <= 10)
        {
            cout << "R" << endl;
        }
        if (res > 10 && res <= 20)
        {
            cout << "L" << endl;
        }
        if (res > 20)
        {
            cout << res << endl;
        }
        i++;
        if (i == n)
        {
            break;
        }
    }
    return 0;
}