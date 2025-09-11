#include <iostream>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string sortVowels(string s)
{
    map<char, int> freq;
    for (char a : s)
        if (isVowel(a))
            freq[a]++;

    string ans;
    for (char c : s)
    {
        if (!isVowel(c))
            ans += c;
        else
        {
            for (auto &p : freq)
                if (p.second > 0)
                {
                    ans += p.first;
                    freq[p.first]--;
                    break;
                }
        }
    }
    return ans;
}

int main() {
    string x = "lEetcOde";
    cout << sortVowels(x) << endl;
}
