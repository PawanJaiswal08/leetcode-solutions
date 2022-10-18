class Solution {
public:
    int solve(int s, int e, string &str, vector<vector<int>> &dp){
        if(s > e || s == e) 
            return 0;
        if(dp[s][e] != -1) return dp[s][e];
        
        if(str[s] == str[e])
            return dp[s][e] = solve(s+1, e-1, str,dp);
        else
            return dp[s][e] = 1 + min(solve(s+1, e, str, dp), solve(s, e - 1, str,dp));
    }
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, n-1, s, dp);
    }
};
