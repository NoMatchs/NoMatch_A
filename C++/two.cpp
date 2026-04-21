#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n_str;

    if(cin >> n_str)
    {
        vector<int> digit_count(10,0);

        for(char c : n_str)
        {
            int digit = c - '0';

            digit_count[digit]++;
        }

        for(int i = 0;i <= 9; i++)
        {
            if(digit_count[i])
            {
                cout << i << ":" << digit_count[i] << endl;
            }
        }

    }

    return 0;
}