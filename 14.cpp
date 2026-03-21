#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Ra,Ca,Rb,Cb;
    cin >> Ra >> Ca;

    vector<vector<int>> A(Ra,vector<int>(Ca));
    for(int i = 0;i < Ra;i++)
    {
        for(int j = 0; j < Ca; j++)
        {
            cin >> A[i][j];
        }
    }

    cin >> Rb >> Cb;

    vector<vector<int>> B(Rb,vector<int>(Cb));
    for(int i = 0;i < Rb;i++)
    {
        for(int j = 0; j < Cb; j++)
        {
            cin >> B[i][j];
        }
    }
    if(Ca != Rb)
    {
        cout << "Error: " << Ca << " != " << Rb << endl;
    }
    else
    {
        cout << Ra << " " << Cb << endl;
         for(int i = 0; i < Ra; i++)
    {
        for(int j = 0; j < Cb; j++)
        {
            int sum = 0;
            for(int k = 0; k < Ca; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            if(j > 0)
            {
                cout << " ";
            }
            cout << sum;
        }
        cout << endl;
    }
    }

   
    return 0;
}