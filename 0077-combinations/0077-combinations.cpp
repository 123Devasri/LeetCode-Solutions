class Solution {
public:
    void rec(vector<vector<int>>&ans,vector<int>&samp,int n,int k,int ind){
        if(samp.size()==k){
            ans.push_back(samp);
            return;
        }
        for(int i=ind;i<=n;i++){
            samp.push_back(i);
            rec(ans,samp,n,k,i+1);
            samp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;vector<int>samp;
        rec(ans,samp,n,k,1);
        return ans;
    }
};