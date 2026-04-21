#include <iostream>

using namespace std;

int main()
{
    double v, g, m, n;
    cin >> v >> g >> m >> n;
    double sum_a = 0, sum_b = 0;
    sum_a = v * 0.5;
    if (g < 300)
    {
        sum_b = m;
    }
    else
    {
        sum_b = n;
    }
    double sum = min(sum_a, sum_b);
    printf("%.1lf", sum);
    return 0;
}