#include <iostream>
using namespace std;

#include <vector>
#include <string>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> counts(26,0);
    for(char c : s)
    {
        counts[c - 'a']++;
    }
    vector<int> scores(26);
    for(int i = 0;i < 26;i++)
    {
        cin >> scores[i];
    }
    long long res = 0;

    for(int i = 0; i < 26; i++)
    {
        res += (long long)counts[i] * scores[i];
    }

    for(int i = 0;i < 26;i++)
    {
        cout << counts[i];
        if(i < 25)
        {
            cout << " ";
        }
    }
    cout << endl;

    cout << res << endl;
    return 0;
}