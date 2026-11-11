class Solution {
public:
    void comb(vector<int>&nums,vector<vector<int>>&ans,vector<int>&sub,unordered_map<int,bool>&mp){
        if(sub.size()==nums.size()){
            ans.push_back(sub);return;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]])continue;
            sub.push_back(nums[i]);
            mp[nums[i]]=true;
            comb(nums,ans,sub,mp);
            sub.pop_back();
            mp[nums[i]]=false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;vector<int>sub;unordered_map<int,bool>mp;
        comb(nums,ans,sub,mp);
        return ans;
    }
};