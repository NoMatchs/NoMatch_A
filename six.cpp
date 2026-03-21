#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int A,B;

    if(cin >> A >> B)
    {
        int sum = 0;
        int count = 0;

        for(int i = A; i <= B; i++)
        {
            sum += i;

            printf("%5d",i);
            count++;

            if(count == 5)
            {
                cout << endl;
                count = 0;
            }
        }
        if(count != 0)
        {
            cout << endl;
        }

        cout << "Sum = " << sum << endl;
    }

    return 0;
}