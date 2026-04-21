#include <iostream>
#include <string>

using namespace std;

int char_to_val(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return 10 + (c - 'A');
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;

        bool bin_ok = true,
             oct_ok = true,
             dec_ok = true,
             hex_ok = true;
        for (char c : s)
        {
            int val = char_to_val(c);
            if (val > 1)
                bin_ok = false;
            if (val > 7)
                oct_ok = false;
            if (val > 9)
                dec_ok = false;
        }
        cout << bin_ok << " " << oct_ok << " " << dec_ok << " " << hex_ok << endl;
    }
    return 0;
}