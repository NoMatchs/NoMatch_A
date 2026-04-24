#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if(str.empty())
    {
        cout << "" << endl;
        return 0;
    }
    string res;
    char current = str[0];
    int count = 1;

    for(int i = 1;i < str.size();i++)
    {
        if(str[i] == current)
        {
            count++;
        }
        else
        {
            res += to_string(count);
            res += current;
            current = str[i];
            count = 1;
        }
    }
    res += to_string(count);
    res += current;

    cout << res << endl;
    return 0;
}