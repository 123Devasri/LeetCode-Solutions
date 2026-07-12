class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int m = board.size();
        int n = board[0].size();

        int dr[8]={-1,-1,-1,0,0,1,1,1};
        int dc[8]={-1,0,1,-1,1,-1,0,1};

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                int live=0;

                for(int k=0;k<8;k++){

                    int nr=i+dr[k];
                    int nc=j+dc[k];

                    if(nr>=0 && nr<m && nc>=0 && nc<n){

                        if(board[nr][nc]==1 || board[nr][nc]==-1)
                            live++;
                    }
                }

                if(board[i][j]==1){

                    if(live<2 || live>3)
                        board[i][j]=-1;
                }
                else{

                    if(live==3)
                        board[i][j]=2;
                }
            }
        }

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                if(board[i][j]==-1)
                    board[i][j]=0;

                if(board[i][j]==2)
                    board[i][j]=1;
            }
        }
    }
};