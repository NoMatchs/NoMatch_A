#include <iostream>
using namespace std;
#include <string>

int main()
{
    int K;
    cin >> K;
    string equal;
    int count = 0;

    while(cin >> equal)
    {
        if(equal == "End")
        {
            break;
        }

        count++;

        if(count % (K + 1) == 0)
        {
            cout << equal << endl;
        }
        else
        {
            if(equal == "Bu")
            {
                cout << "JianDao" << endl;
            }
            else if(equal == "JianDao")
            {
                cout << "ChuiZi" << endl;
            }
            else
            {
                cout << "Bu" << endl;
            }
        }
    }
    return 0;
}