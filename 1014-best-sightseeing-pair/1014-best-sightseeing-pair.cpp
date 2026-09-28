class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int i=0,j=1,score=0,maxscore=0,best=values[0]+0;
        for(j=1;j<values.size();j++){
           score=best+values[j]-j;
           maxscore=max(score,maxscore);
          i++;
          best=max(best,values[i]+i);
        }
        return maxscore;
    }
};