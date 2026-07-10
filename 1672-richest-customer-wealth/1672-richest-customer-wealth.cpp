class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,sum=0,max=0;
        for(i=0;i<accounts.size();i++){
            for(j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            max=(max>sum)?max:sum;
            sum=0;
        }
        return max;
    }
};