// #include <iostream>
// #include <vector>
// #include <string>
// #include <limits>
// #include <sstream>
// using namespace std;

// int main() {
//     string target,article;
//     cin >> target;
//     cin.ignore(numeric_limits<streamsize>::max(),'\n');
//     getline(cin,article);

//     int count = 0;
//     int first_pos = -1;
//     int pos=  0;
//     stringstream ss(article);
//     string word;

//     while(ss >> word)
//     {
//         while(pos < article.size() && article[pos] == ' ')
//         {
//             pos++;
//         }
//         if(pos >= article.size()) break;

//         if(word == target)
//         {
//             count++;
//             if(first_pos == -1)
//             {
//                 first_pos = pos;
//             }
//         }
//         pos += word.size();
//     }
//     if(count > 0)
//     {
//         cout << count << " " << first_pos << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    
    string article = "hello world hello everyone";
    string word;
    stringstream ss(article);
    while(ss >> word)
    {
        cout << word << "^";
    }
    return 0;
}