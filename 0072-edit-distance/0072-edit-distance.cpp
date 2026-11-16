class Solution {
public:
    int rec(vector<vector<int>>& dp, string& word1, string& word2, int i, int j) {
        if(i == word1.size() && j == word2.size())
            return 0;
        if(i == word1.size())
            return word2.size() - j;
        if(j == word2.size())
            return word1.size() - i;

        if(dp[i][j] != -1)
            return dp[i][j];
        if(word1[i] == word2[j]) {
            return dp[i][j] = rec(dp, word1, word2, i+1, j+1);
        }
        int insertOp = rec(dp, word1, word2, i, j+1);
        int deleteOp = rec(dp, word1, word2, i+1, j);
        int replaceOp = rec(dp, word1, word2, i+1, j+1);

        return dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(
            word1.size(),
            vector<int>(word2.size(), -1)
        );
        return rec(dp, word1, word2, 0, 0);
    }
};