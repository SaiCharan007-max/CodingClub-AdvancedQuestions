class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int MOD = 1e9+7;
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        int win_count = 0;
        for(int i = 2; i < n+1; i++) {
            if(i-delay > 0)
                win_count = (win_count+dp[i-delay])%MOD;
            if(i-forget > 0)
                win_count = (win_count-dp[i-forget]+MOD)%MOD;
            dp[i] = win_count;
        }
        int ans = 0;
        for(int i = n-forget+1; i <= n; i++) { 
            ans = (ans+dp[i])%MOD;
        }
        return ans;
    }
};
