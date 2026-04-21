#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if(n  == 1 && m == 1)
    {
        cout << -1 << endl;
    }
    else if(n == 1)
    {
        cout << '0' << string(m-1,'1') << endl;
    }
    else if(m == 1)
    {
        cout << 0 << endl;
        for(int i = 1;i < n;i++)
        {
            cout << 1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}