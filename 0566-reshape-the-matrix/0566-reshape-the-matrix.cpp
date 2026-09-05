class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int i,j,m,index,n;vector<vector<int>>ans(r,vector<int>(c));
        m=mat.size();n=mat[0].size();
        if(m*n!=r*c)return mat;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                index=i*c+j;
                ans[i][j]=mat[index/n][index%n];
            }
        }
        return ans;
    }
};