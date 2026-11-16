class Solution {
public:
    int rec(vector<int>&dp,vector<int>&coins,int bal){
       if(bal==0){
        return 0;
       }
       if(bal<0){
        return INT_MAX;
       }
       if(dp[bal]!=-1)return dp[bal];
       int mini=INT_MAX;
       for(int i=0;i<coins.size();i++){
        int sub=rec(dp,coins,bal-coins[i]);
        if(sub!=INT_MAX){
            mini=min(mini,1+sub);
        }
       }
       return dp[bal]=mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int res=rec(dp,coins,amount);
        if(res==INT_MAX){
            return -1;
        }
        else{
            return res;
        }
    }
};