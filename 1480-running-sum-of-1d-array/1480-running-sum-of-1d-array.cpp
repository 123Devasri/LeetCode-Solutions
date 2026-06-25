class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum(nums.size());int i;
        sum[0]=nums[0];
        for(i=1;i<nums.size();i++){
            sum[i]=nums[i]+sum[i-1];
        }
        return sum;
    }
};