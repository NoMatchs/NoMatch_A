#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for(int i = 1; i <= N; i++)
    {
        int digit = 1;
        for(int j = 1; j <= i; j++)
        {
            digit *= j;
        }
        sum += digit;
    }
    cout << sum << endl;
    return 0;
}