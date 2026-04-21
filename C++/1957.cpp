#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    cin >> i;
    char last_op = 0;
    while(i--)
    {
        char first;
        cin >> first;
        if(first == 'a' || first == 'b' || first == 'c')
        {
            last_op = first;
            int x,y;
            cin >> x >> y;
            int res;
            string op_str;
            if(last_op == 'a')
            {
                res = x + y;
                op_str = '+';
            }
            else if(last_op == 'b')
            {
                res = x - y;
                op_str = '-';
            }
            else
            {
                res = x * y;
                op_str = "*";
            }
           string expr = to_string(x) + op_str + to_string(y) + "=" + to_string(res);
            cout << expr << endl << expr.size() << endl;
        }
        else
        {
            cin.unget();
            int x,y;
            cin >> x>>y;
            int res;
            string op_str;
            if(last_op == 'a')
            {
                res = x + y;
                op_str = '+';
            }
            else if(last_op == 'b')
            {
                res = x - y;
                op_str = '-';
            }
            else
            {
                res = x * y;
                op_str = "*";
            }
           string expr = to_string(x) + op_str + to_string(y) + "=" + to_string(res);
            cout << expr << "\n" << expr.size() << "\n";
        }
    }    
    return 0;
}