#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double threshold;
    string dna_1,dna_2;

    cin >> threshold >> dna_1 >> dna_2;

    int len = dna_1.size();
    int samecount = 0;

    for(int i = 0;i < len;i++)
    {
        if(dna_1[i] == dna_2[i])
        {
            samecount++;
        }
    }
    double radio = static_cast<double>(samecount) / len;
    if(radio >= threshold)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}