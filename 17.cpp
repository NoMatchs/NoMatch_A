#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int year,month;

    if(n >= 10000)
    {
        year = n / 100;
        month = n % 100;
    }
    else
    {
        int lastTwo = n / 100;
        if(lastTwo < 22)
        {
            year = 2000 + lastTwo;
        }
        else
        {
            year = 1900 + lastTwo;
        }
        month = n % 100;
    }
    printf("%04d-%02d\n",year,month);
    return 0;
}