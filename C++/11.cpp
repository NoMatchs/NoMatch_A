#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int month,day,year;
    char d1, d2;

    if(cin >> month >> d1 >> day >> d2 >> year)
    {
        cout << year << "-" 
        << setw(2) << setfill('0') << month
 << "-"
<< setw(2) << setfill('0') << day << endl;    }
    return 0;
}