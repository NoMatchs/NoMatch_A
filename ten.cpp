#include <iostream>
using namespace std;

bool isPrime(long long n)
{
    if(n <= 1)
    {
        return false;
    }
    if( n == 2)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return false;
    }
    for(long long i = 3; i * i <= n ;i+=2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        long long num;
        cin >> num;
        if(isPrime(num))
        {
            cout << "Yes" << endl;
        }
        else{
            cout <<"No" << endl;
        }
    }
    return 0;
}