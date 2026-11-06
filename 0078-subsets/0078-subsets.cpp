class Solution {
public:
    void find(vector<vector<int>>&sub,vector<int>&nums,int i,vector<int>&ans){
        if(i==nums.size()){
          sub.push_back(ans);
          return;
        }
        ans.push_back(nums[i]);
        find(sub,nums,i+1,ans);
        ans.pop_back();
        find(sub,nums,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sub;vector<int>ans;
        find(sub,nums,0,ans);
        return sub;
    }
};