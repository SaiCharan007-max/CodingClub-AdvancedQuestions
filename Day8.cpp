class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        
        vector<string> words;
        stringstream ss(text);
        string word;
        while(ss >> word)
            words.push_back(word);
        
        int ans = 0;

        for(auto &w : words) {
            bool is_ok = true;
            for(int i = 0; i < w.size(); i++)
                if(broken.count(w[i])){
                    is_ok = false;
                    break;
                }
            if(is_ok)
                ans++;    
        }
        return ans;
    }
};
