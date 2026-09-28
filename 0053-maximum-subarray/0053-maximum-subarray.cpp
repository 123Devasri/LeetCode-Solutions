class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0],currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentsum=max(nums[i],nums[i]+currentsum);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};