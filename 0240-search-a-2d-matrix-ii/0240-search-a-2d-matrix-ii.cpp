class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j,m=matrix.size(),n=matrix[0].size();
        j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]==target){
                return true;
            }
            else{
                i++;
            }
        }
        return false;
    }
};