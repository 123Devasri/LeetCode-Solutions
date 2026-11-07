class Solution {
public:
    void comb(vector<int>& candidates, int target,vector<int>ans,set<vector<int>>&hs,int ind){
        if(target==0){
            hs.insert(ans);return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind &&candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            ans.push_back(candidates[i]);
            comb(candidates,target-candidates[i],ans,hs,i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans;set<vector<int>>hs;
        comb(candidates,target,ans,hs,0);
        return vector<vector<int>>(hs.begin(),hs.end());
    }
};