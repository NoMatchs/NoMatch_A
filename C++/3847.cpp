#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

bool is_valid(const string &pwd)
{
    int len = pwd.size();
    if (len < 6 || len > 12)
    {
        return false;
    }
    bool has_upper = false, has_lower = false, has_digit = false, has_special = false;
    for (char c : pwd)
    {
        if (isupper(c))
        {
            has_upper = true;
        }
        else if (islower(c))
        {
            has_lower = true;
        }
        else if (isdigit(c))
        {
            has_digit = true;
        }
        else if (c == '!' || c == '@' || c == '#' || c == '$')
        {
            has_special = true;
        }
        else
        {
            return false;
        }
    }

    int type_cnt = 0;
    if (has_upper)
        type_cnt++;
    if (has_lower)
        type_cnt++;
    if (has_digit)
        type_cnt++;
    if (type_cnt < 2)
    {
        return false;
    }
    if (!has_special)
    {
        return false;
    }
    return true;
}
vector<string> split(const string &s)
{
    vector<string> res;
    stringstream ss(s);
    string part;
    while (getline(ss, part, ','))
    {
        res.push_back(part);
    }
    return res;
}

int main()
{
    string input;
    getline(cin, input);
    vector<string> passwords = split(input);

    for (const string &pwd : passwords)
    {
        if (is_valid(pwd))
        {
            cout << pwd << endl;
        }
    }
    return 0;
}
