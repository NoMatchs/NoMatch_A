#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int Single = 0, Double = 0;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            Double++;
        }
        else
        {
            Single++;
        }
    }
    cout << Single << " " << Double << endl;
    return 0;
}