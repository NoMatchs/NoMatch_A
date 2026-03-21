#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N,K;
    cin >> N;
    vector<string> ban(N);
     for(auto& s : ban)
     {
        cin >> s;
     }
     cin >> K;
     string dummy, text;
     getline(cin,dummy);
     getline(cin, text);

     int count = 0, i =0;
     string res = "";

     res.reserve(text.size() * 1.5);

     while(i < text.size())
     {
        bool found = false;
        for(const auto& word : ban)
        {
            if(text.compare(i,word.size(),word ) == 0)
            {
                count++;
                res += "<censored>";
                i += word.size();
                found = true;
                break;
            }
        }
     }
    return 0;
}