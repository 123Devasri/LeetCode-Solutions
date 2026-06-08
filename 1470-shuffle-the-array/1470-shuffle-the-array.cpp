class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i;vector<int>ans;
        for(i=0;i<n;i++){
           ans.push_back(nums[i]);
           ans.push_back(nums[i+n]);
        }
        return ans;
    }
};