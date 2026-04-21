#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    wector<int> ans(N, 0);

    for (int i = 1; i <= d; i++)
    {
        int a;
        cin >> a;
        ans[a] += i;
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
    return 0;
}