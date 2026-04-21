#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int count = 0;
    int sqrtS = sqrt(s);
    for (int w = 1; w <= sqrtS; w++)
    {
        if (s % w == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}