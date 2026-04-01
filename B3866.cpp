#include <iostream>
#include <algorithm>
using namespace std;

int getNum(int n, int order)
{
    int digits[3];

    digits[0] = n / 100;
    digits[1] = (n / 10) % 10;
    digits[2] = n % 10;
    if (order == 1)
    {
        sort(digits, digits + 3, greater<int>());
    }
    else
    {
        sort(digits, digits + 3);
    }
    return digits[0] * 100 + digits[1] * 10 + digits[2];
}

int main()
{

    int n;
    cin >> n;
    int sum = 0;

    while (n != 495)
    {
        int maxNum = getNum(n, 1);
        int minNum = getNum(n, 0);
        n = maxNum - minNum;
        sum++;
    }
    cout << sum << endl;
    return 0;
}