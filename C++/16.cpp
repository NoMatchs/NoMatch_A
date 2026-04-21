#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int a = 5000;
    int b = (100 - x) * y;
    int c = 1 / 2 * x * y;
    int d = 1 / 2 * (100 - x) * (100 - y);
    cout << a - b -c - d << endl;
    return 0;
}