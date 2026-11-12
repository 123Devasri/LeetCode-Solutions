
class Solution {
public:
    int rec(vector<int>& nums, int index, vector<int>& dp) {
        if(index >= nums.size() - 1)
            return 0;
        if(dp[index] != -1)
            return dp[index];
        int mini = INT_MAX;
        for(int i = 1; i <= nums[index]; i++) {
            if(index + i < nums.size()) {
                int ans = rec(nums, index + i, dp);
                if(ans != INT_MAX)
                    mini = min(mini, ans + 1);
            }
        }
        return dp[index] = mini;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return rec(nums, 0, dp);
    }
};
