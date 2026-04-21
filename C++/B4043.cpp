#include <iostream>

using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;

    long long total = a + b;

    long long count = n / total;

    cout << count << endl;
    return 0;
}