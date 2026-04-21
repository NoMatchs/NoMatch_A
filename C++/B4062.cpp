#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double K;
    cin >> K;
    if (K > 212)
    {
        cout << "Temperature is too high!" << endl;
        return 0;
    }

    double c, f;
    c = K - 273.15;
    f = c * 1.8 + 32;

    printf("%.2lf %.2lf", c, f);
    return 0;
}