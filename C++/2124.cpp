#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s ;
    cin >> s;
    string ss = s;
    reverse(ss.begin(),ss.end());
    if(ss == s)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}