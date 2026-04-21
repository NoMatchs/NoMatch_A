#include <iostream>

using namespace std;

string toLower(string s)
{
    for(char& c : s)
    {
        c = tolower(c);
    }
    return s;
}

int main()
{
    string target, article;
    getline(cin,target);
    getline(cin,article);

    string target_lower = toLower(target);

    int count = 0;
    int first_pos = -1;

    return 0;
}