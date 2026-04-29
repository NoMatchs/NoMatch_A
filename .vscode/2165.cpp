#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

bool isvalid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            if ((c == ')') && (top == '(') ||
                (c == '}') && (top == '{') ||
                (c == ']') && (top == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        if (s.empty() || isvalid(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}