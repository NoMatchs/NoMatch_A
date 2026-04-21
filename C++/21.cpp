#include <iostream>
using namespace std;

int main()
{
    string text;
    string clipboard;
    int n;
    if(!(cin >> text >> n))
    {
        return 0;
    }

    char operation;

    for(int i = 0; i< n;i++)
    {
        cin >> operation;
        if(operation == 'C')
        {
            int l, r;
            cin >> l >> r;

            int start_pos = l - 1;
            int end_pos = r - 1;
            int length = end_pos - start_pos + 1;

            clipboard = text.substr(start_pos,length);
        }
        else if(operation == 'P')
        {
            int p ;
            cin >> p;
            if(!clipboard.empty())
            {
                int insert_pos = p;
                text.insert(insert_pos,clipboard);
            }
        }
    }
    cout << text << endl;
    return 0;
}