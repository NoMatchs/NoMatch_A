#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int c_square = a * a + b * b;
            int c = sqrt(c_square);

            if (c * c == c_square && c <= n)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}