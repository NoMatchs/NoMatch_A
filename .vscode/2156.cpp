#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin,sentence);

    if(!sentence.empty() && sentence.back() == '.')
    {
        sentence.pop_back();
    }
    string currentWord;
    string longestWord;
    int maxlen = 0;
    for(char c : sentence)
    {
        if(c == ' ')
        {
            if(currentWord.size() > maxlen)
            {
                maxlen = currentWord.size();
                longestWord = currentWord;
            }
            currentWord.clear();
        }
        else
        {
            currentWord += c;
        }
    }
     if (currentWord.size() > maxlen) {
        maxlen = currentWord.size();
        longestWord = currentWord;
    }
    cout << longestWord << endl;
    return 0;   
}