#include <iostream>
#include <string>
#include <vector>
using namespace std;

int flag[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char ans[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main()
{
    int N;
    cin >> N;
    bool all_passed = true;
    while(N--)
    {
        string s;
        cin >> s;
        bool is_all_digit = true;
        for(int i = 0; i < 17; i++)
        {
            if(s[i] > '9' || s[i] < '0')
            {
                is_all_digit = false;
                break;
            }
        }

        if(!is_all_digit)
        {
            cout << s << endl;
            all_passed = false;
            continue;
        }
        long sum = 0;
        for(int i = 0; i < 17 ; i++)
        {
            sum += (s[i] - '0') * flag[i];
        }
        int z = sum % 11;
        char m = ans[z];

        if(s[17] != m)
        {
            cout << s << endl;
            all_passed = false;
        }
    }
    
    if(all_passed)
    {
        cout << "All passed" << endl;
    }
    return 0;
}