#include <iostream>
#include <numeric>
using namespace std;

//递归写法
long long DgGCD(long long a, long long b)
{
    return b == 0 ? a : DgGCD(b, a % b);
}

//循环写法
long long LoopGcd(long long a, long long b)
{
    while( b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    cout << gcd(12,18) << endl;
    cout << 12 % 18 << endl;
    return 0;
}