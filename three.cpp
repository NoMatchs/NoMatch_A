#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student{
    string id;
    int exam_seat;
};

int main()
{
    int n;
    if(!(cin >> n))
    {
        return 0;
    }

    vector<student> students(n+1);

    for(int i = 0; i < n; i++)
    {
        string id;
        int trial_seat,exam_seat;

        cin >> id >> trial_seat >> exam_seat;

        students[trial_seat].id = id;
        students[trial_seat].exam_seat = exam_seat;
    }

    int m ;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int res;
        cin >> res;

        cout << students[res].id << " " << students[res].exam_seat << endl;
    }

    return 0;
}