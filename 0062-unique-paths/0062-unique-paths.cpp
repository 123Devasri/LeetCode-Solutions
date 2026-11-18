class Solution {
public:
    int rec(vector<vector<int>>& dp, int m, int n, int i, int j) {
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = rec(dp,m,n,i+1,j)
                        + rec(dp,m,n,i,j+1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return rec(dp,m,n,0,0);
    }
};