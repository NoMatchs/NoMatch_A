#include <iostream>

using namespace std;

int main()
{
    double plan_1 = 0, plan_2 = 0;
    double x, y, n, p;
    cin >> x >> y >> n >> p;
    if (p >= x)
    {
        plan_1 = p - y;
    }
    else
    {
        plan_1 = p;
    }

    plan_2 = p * n / 10.0;
    if (plan_1 > plan_2)
    {
        printf("%.2lf", plan_2);
    }
    else
    {
        printf("%.2lf", plan_1);
    }
    return 0;
}