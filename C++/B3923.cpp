// #include <iostream>

// using namespace std;

// int main() {
//     int a,b,m,n;
//     cin >> a >> b >> m >> n;
//     int c = a + b;

//     int sum = c;
//     n -= 2;

//     int flag_1 =  b + c;
//     int flag_2 = 0;
//     while(n--)
//     {

//         if(sum > m)
//         {
//             break;
//         }
//         sum += c;
//     }
//     cout << sum << endl;
//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int a, b, m, n;
    cin >> a >> b >> m >> n;
    long long day[365] = {0};
    day[1] = a;
    day[2] = b;
    long long total = a + b;
    bool stop = false;

    for (int i = 3; i <= N; i++)
    {
        if (stop)
            break;
        day[i] = day[i - 1] + day[i - 2];
        if (day >= m)
        {
            stop = true;
        }
        total += day[i];
    }
    cout << total << endl;
    return 0;
}