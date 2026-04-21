#include <iostream>

using namespace std;

int main()
{

    int n;
    int sum = 0;
    cin >> n;
    int c = n;
    while (n--)
    {
        sum += c * c;
        c--;
    }
    cout << sum << endl;
    return 0;
}