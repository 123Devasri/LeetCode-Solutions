class Solution {
public:
    bool win(vector<vector<char>>& board,char p){
            int i;
            for(i=0;i<3;i++){
                if(board[i][0]==p && board[i][1]==p && board[i][2]==p)
                    return true;
            }
            
            for(i=0;i<3;i++){
                if(board[0][i]==p && board[1][i]==p && board[2][i]==p)
                    return true;
            }
            if(board[0][0]==p &&board[1][1]==p && board[2][2]==p)
                   return true;
            if(board[0][2]==p &&board[1][1]==p && board[2][0]==p)
                return true;
           return false;
        }
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3,vector<char>(3,' '));

        for(int i=0;i<moves.size();i++){
            int r=moves[i][0];
            int c=moves[i][1];
            if(i%2==0){
               board[r][c]='A';
            }
            else{
                board[r][c]='B';
            }

        }
            if(win(board,'A')){
                return "A";
            }
            if(win(board,'B')){
                return "B";
            }
            if(moves.size()==9){
                return "Draw";
            }
            return "Pending";
    }
};