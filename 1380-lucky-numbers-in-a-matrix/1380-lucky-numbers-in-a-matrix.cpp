class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int min,index=0,col;vector<int>ans;
        int i,j,m=matrix.size(),n=matrix[0].size();
        for(i=0;i<m;i++){
            min=matrix[i][0];index=0;
            for(j=1;j<n;j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];index=j;
                }
            }
            col=matrix[0][index];
            for(int k=1;k<m;k++){
                if(matrix[k][index]>col){
                    col=matrix[k][index];
                }
            }
            if(min==col){
                ans.push_back(min);
            }
        }
        return ans;
    }
};