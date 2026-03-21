#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long N;
    if(!(cin >> N))
    {
        return 0;
    }

    int max_len = 1;
    long long start_factor = N;

    for(long long i = 2; i * i <= N; i++)
    {
        long long product = 1;

        for(long long j = i; ;j++)
        {
            product *= j;

            if(N % product)
            {
                break;
            }

            int current_len = j - i + 1;

            if(current_len > max_len)
            {
                max_len = current_len;
                start_factor = i;
            }
        }
    }

    cout << max_len << endl;

    for(int k = 0; k < max_len ; k++)
    {
        cout << (start_factor + k);

        if(k < max_len - 1)
        {
            cout << "*";
        }
    }
    cout << endl;
    
    return 0;
}