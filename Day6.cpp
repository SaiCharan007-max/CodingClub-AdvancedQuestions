#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxFreqSum(string s)
{
    int max_vowel = 0, max_consonant = 0;
    vector<int> freq(26, 0);

    for (char c : s)
    {
        int idx = c - 'a';
        freq[idx]++;

        if (isVowel(c))
            max_vowel = max(max_vowel, freq[idx]);
        else
            max_consonant = max(max_consonant, freq[idx]);
    }

    return max_vowel + max_consonant;
}
