#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n = 0;
    int c;

    while (m--)
    {
        c = 0;
        cin >> n;

        int flag_N = n;

        while (flag_N > 0)
        {
            c++;
            flag_N /= 10;
        }

        int sum = 0;
        int flag = n;
        while (n > 0)
        {
            sum += pow((n % 10), c);
            n /= 10;
        }
        if (sum == flag)
        {
            cout << "T" << endl;
        }
        else
        {
            cout << "F" << endl;
        }
    }
    return 0;
}