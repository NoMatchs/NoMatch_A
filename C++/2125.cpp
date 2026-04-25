#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxScore = -1;
    string bestName;

    for(int i = 0;i < n;i++)
    {
        int score;
        string name;
        cin >> score >> name;
        if(score > maxScore)
        {
            maxScore = score;
            bestName = name;
        }
    }
    cout << bestName << endl;
    return 0;
}