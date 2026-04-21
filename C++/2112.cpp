#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s1 == s2)
        {
            cout << "Tie" << endl;
        }
        else if(
            (s1 == "Rock" && s2 == "Scissors") ||
            (s1 == "Scissors" && s2 == "Paper") ||
            (s1 == "Paper" && s2 == "Rock")
        )
        {
            cout << "Player1" << endl;
        }
        else
        {
            cout << "Player2" << endl;
        }
    }
    return 0;
}