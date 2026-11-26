class Solution {
public:
    void rec(vector<int>&samp,vector<int>&nums,vector<vector<int>>&ans,vector<int>&used){
        if(samp.size()==nums.size()){
           ans.push_back(samp);
           return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i])continue;
            if(i>0 && nums[i]==nums[i-1] && !used[i-1])continue;
            used[i]=true;
            samp.push_back(nums[i]);
            rec(samp,nums,ans,used);
            samp.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;vector<int>samp;
        vector<int>used(nums.size(),0);
        rec(samp,nums,ans,used);
        return ans;
    }
};