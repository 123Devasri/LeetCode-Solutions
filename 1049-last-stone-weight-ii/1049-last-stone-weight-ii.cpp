class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int total = 0;

        for(int x : stones)
            total += x;

        int target = total / 2;

        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for(int x : stones) {
            for(int j = target; j >= x; j--) {
                dp[j] = dp[j] || dp[j - x];
            }
        }

        for(int j = target; j >= 0; j--) {
            if(dp[j]) {
                return total - 2 * j;
            }
        }

        return 0;
    }
};