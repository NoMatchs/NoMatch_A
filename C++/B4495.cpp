#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    int H[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> H[i];
    }

    int alice = H[0];

    int min_diff = INT_MAX;
    int best = 0;

    for (int i = 1; i < 4; i++)
    {
        int diff = abs(H[i] - alice);
        if (diff < min_diff)
        {
            min_diff = diff;
            best = H[i];
        }
        else if (diff == min_diff)
        {
            if (H[i] < best)
            {
                best = H[i];
            }
        }
    }
    cout << best << endl;
    return 0;
}