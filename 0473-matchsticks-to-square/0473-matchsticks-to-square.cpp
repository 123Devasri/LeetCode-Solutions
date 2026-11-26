class Solution {
public:
    bool rec(vector<int>&matchsticks,int ind,vector<int>& sides,int target){
        if(ind==matchsticks.size())return true;
        for(int i=0;i<4;i++){
            if(sides[i]+matchsticks[ind]<=target){
            sides[i]=sides[i]+matchsticks[ind];
            if(rec(matchsticks,ind+1,sides,target))return true;
              sides[i]-=matchsticks[ind];
            }
            if(sides[i]==0)break;
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        vector<int>sides(4,0);int sum=0,target;
        for(int i=0;i<matchsticks.size();i++){
            sum+=matchsticks[i];
        }
        if(sum%4!=0)return false;
        target=sum/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        if(matchsticks[0]>target)return false;
       return rec(matchsticks,0,sides,target);
    }
};