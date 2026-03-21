#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> hats(N);

    for(int i = 0;i < N ;i++)
    {
        cin >> hats[i] ;
    }

    int k = 0;
    cin >> k;

    while(k--)
    {
        bool correct = false;
        bool wrong = false;

        for(int i = 0; i < N;i++)
        {
            int guess;
            cin >> guess;

            if(guess == 0)
            {
                continue;
            }

            if(guess == hats[i])
            {
                correct = true;
            }
            else
            {
                wrong = true;
            }
        }
        if(correct && ! wrong)
        {
            cout << "Da Jiang!!!" << endl;
        }
        else
        {
            cout << "Ai Ya" << endl;
        }
    }
    return 0;
}