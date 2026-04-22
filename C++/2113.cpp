#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    string res;
    for(int i = 0;i < len ;i++)
    {
        int next_idx = (i == len - 1) ? 0 : i + 1;
        char new_char = s[i] + s[next_idx];
        res += new_char;
    }
    cout << res << endl;
    return 0;
}