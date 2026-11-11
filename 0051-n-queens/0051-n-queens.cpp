class Solution {
public:
    bool place(int row,int col,vector<string>&ans,int n){
        int r=row,c=col;
        while(r>=0 && c>=0){
            if(ans[r][c]=='Q')return false;
            r--;c--;
        }
        r=row;c=col;
        while(c>=0){
            if(ans[r][c]=='Q')return false;
            c--;
        }
        r=row;c=col;
        while(r<n && c>=0){
            if(ans[r][c]=='Q')return false;
            r++;c--;
        }
        return true;
    }
    void solve(vector<string>&ans,int n,vector<vector<string>>&sub,int col){
        if(col==n){
            sub.push_back(ans);
            return;
        }
        for(int i=0;i<n;i++){
            if(place(i,col,ans,n)){
                ans[i][col]='Q';
                solve(ans,n,sub,col+1);
                ans[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ans(n,string(n,'.'));vector<vector<string>>sub;
        solve(ans,n,sub,0);
        return sub;
    }
};