class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;

        for(int x : nums)
            total += x;

        // Equal partition is impossible if total is odd
        if(total % 2 != 0)
            return false;

        int target = total / 2;

        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for(int x : nums) {
            for(int j = target; j >= x; j--) {
                dp[j] = dp[j] || dp[j - x];
            }
        }

        return dp[target];
    }
};