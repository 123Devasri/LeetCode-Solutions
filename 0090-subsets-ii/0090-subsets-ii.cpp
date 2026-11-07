class Solution {
public:
    void sub(set<vector<int>>&subsets,vector<int>&ans,int ind,vector<int>&nums){
       if(ind==nums.size()){
        subsets.insert(ans);
        return;
       }
       ans.push_back(nums[ind]);
       sub(subsets,ans,ind+1,nums);
       ans.pop_back();
       sub(subsets,ans,ind+1,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>subsets;vector<int>ans;
        sub(subsets,ans,0,nums);
        return vector<vector<int>>(subsets.begin(),subsets.end());
    }
};