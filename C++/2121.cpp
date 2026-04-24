#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;

    getline(cin, sentence);

    vector<string> words;
    string current_word;

    for(char c : sentence)
    {
        if(isalpha(c))
        {
            current_word += c;
        }
        else
        {
            if(!current_word.empty())
            {
                words.push_back(current_word);
                current_word.clear();
            }
        }
    }
    if(!current_word.empty())
    {
        words.push_back(current_word);
    }
    if(words.empty())
    {
        return 0;
    }

    string log = words[0];
    string shot = words[0];

    for(const string &word : words)
    {
        if(word.size() > log.size())
        {
            log = word;
        }
        if(word.size() < shot.size())
        {
            shot = word;
        }
    }
    cout << log << endl << shot << endl;
    return 0;
}