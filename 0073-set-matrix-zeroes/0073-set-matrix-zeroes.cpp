class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        bool first = false;
        if(matrix.empty())return;
        int m=matrix.size();int n=matrix[0].size();
        for(i=0;i<m;i++){
            if(matrix[i][0]==0){
                first=true;
            }
            for(j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(i=m-1;i>=0;i--){
            for(j=n-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0; 
                }
            if(first)
               matrix[i][0]=0;
        }
        }
};