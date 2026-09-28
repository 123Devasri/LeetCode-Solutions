class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro = nums[0];
        int minPro = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            int newMax = max({x, x * maxPro, x * minPro});
            int newMin = min({x, x * maxPro, x * minPro});
            maxPro = newMax;
            minPro = newMin;
            ans = max(ans, maxPro);
        }
        return ans;
    }
};