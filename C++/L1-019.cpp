#include <iostream>

using namespace std;

int main()
{
    int Jia,Yi;
    cin >> Jia >> Yi;
    int N;
    cin >> N;
    int A1,A2,B1,B2;
    int flag_A = 0, flag_B = 0;
    while(N--)
    {
        cin >> A1 >> A2 >> B1 >> B2;
        int sum = A1 + B1;
        if(A2 == sum && B2 != sum)
        {
            flag_A++;
        }
        if(B2 == sum && A2 != sum)
        {
            flag_B++;
        }
        if(flag_A >= Jia)
        {
            cout << "A" << endl;
            cout << flag_B << endl;
            return 0;
        }
        if(flag_B >= Yi)
        {
            cout << "B" << endl;
            cout << flag_A << endl;
            return 0;
        }
    }
    return 0;
}