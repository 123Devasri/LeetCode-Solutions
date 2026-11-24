class Solution {
public:
    int rec(int amount,vector<int>&coins,int ind,vector<vector<int>>&dp){
        if(amount==0)return 1;
        if(ind==coins.size())return 0;
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        int take=0;
        if(coins[ind]<=amount){
            take=rec(amount-coins[ind],coins,ind,dp);
        }
        int skip = rec(amount,coins,ind+1,dp);
        return dp[ind][amount] = take + skip;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return rec(amount,coins,0,dp);
    }
};