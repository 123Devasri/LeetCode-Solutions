class Solution {
public:
    void comb(vector<vector<int>>&sum ,vector<int>& candidates, int target ,int index,vector<int> &ans){
        if(target==0){
            sum.push_back(ans);
            return;
        }
        if(target<0||index==candidates.size())return;
        ans.push_back(candidates[index]);
        comb(sum,candidates,target-candidates[index],index,ans);
        ans.pop_back();
        comb(sum,candidates,target,index+1,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>sum;vector<int>ans;
        comb(sum,candidates,target,0,ans);
        return sum;
    }
};