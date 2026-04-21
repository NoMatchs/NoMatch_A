#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int N;
    cin >> N;

    unordered_set<string> friends_in_circles;

    for(int i = 0;i < N;i++)
    {
        int k;
        cin >> k;
        for(int j = 0;j < k;j++)
        {
            string id;
            cin >> id;
            friends_in_circles.insert(id);
        }
    }
    int M;
    cin >> M;
    vector <string> query_ids(M);
    for(int i = 0;i < M; i++)
    {
        cin >> query_ids[i];
    }

    unordered_set<string> printed_ids;
    bool founda = false;

    for(const string& id : query_ids)
    {
        if(friends_ids.find(id) == friends_ids.end() && 
        printed_ids.find(id) == printed_ids.end())
        {
            if(found_handsome)
            {
                cout << " ";
            }
            cout << id;
            printed_ids.insert(id);
            founda= true;
        }

    }

    if(!founda)
    {
        cout << "No one is hands" ;
    }

    cout << endl;
    return 0;
}