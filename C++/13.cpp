#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValid(const string& s)
{
    if(s.empty())
    {
        return false;
    }

    for(char c : s)
    {
        if(!isdigit(c))
        {
            return false;
        }
    }
    if(s[0] == '0' && s.size() > 1)
    {
        return false;
    }
    try
    {
        int num = stoi(s);
        if(num >= 1 && num <= 1000)
        {
            return true;
        }
    }catch(...)
    {
        return false;
    }
    return false;
}

int main()
{
    string A_str,B_str;
    cin >> A_str >> B_str;

    bool A_valid = isValid(A_str);
    bool B_valid = isValid(B_str);

    if(A_valid && B_valid)
    {
         int a = stoi(A_str);
        int b = stoi(B_str);
  
        cout << a << " + " << b << " = " << (a + b) << endl;
    }
    else if(!A_valid && B_valid)
    {
          int b = stoi(B_str);
        cout << "? + " << b << " = ?" << endl;
    }
    else if(A_valid && !B_valid)
    {
         int a = stoi(A_str);
        cout << a << " + ? = ?" << endl; 
    }
    else
    {
        cout << "? + ? = ?" << endl;
    }
    return 0;
}