class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());int n=tokens.size();
        int left=0,right=n-1;int score=0,maxscore=0;
        while(left<=right){
          if(tokens[left]<=power){
            score+=1;maxscore=max(maxscore,score);
            power-=tokens[left];left++;
          }
          else if(score>0){
           power+=tokens[right];
           right--;score-=1;
          }
          else{
            break;
          }
        }
        return maxscore;
    }
};