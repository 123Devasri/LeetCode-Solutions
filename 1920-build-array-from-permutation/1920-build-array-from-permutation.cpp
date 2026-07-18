class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i; vector<int>ans;
for(i=0;i<nums.size();i++){
     ans.push_back(nums[nums[i]]);
}
   return ans;
    }
};