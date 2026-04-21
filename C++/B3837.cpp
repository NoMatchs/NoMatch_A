#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (c != 'Z')
            {
                cout << c++;
            }
            else
            {
                cout << 'Z';
                c = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}