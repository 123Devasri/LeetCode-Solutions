class Solution {
public:
    void comb(int k,int n,vector<vector<int>>&ds,vector<int>ans,int sum,int j){
        if(ans.size()==k){
            if(sum==n)
               ds.push_back(ans);
            return;
        }
        for(int i=j;i<9;i++){
            if(sum+(i+1)>n)break;
            ans.push_back(i+1);
            comb(k,n,ds,ans,sum+(i+1),i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;vector<vector<int>>ds;
        comb(k,n,ds,ans,0,0);
        return ds;
    }
};