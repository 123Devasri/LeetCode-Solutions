class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,minprice=prices[0],maxprofit=0,profit=0;
        for(i=1;i<prices.size();i++){
            minprice=min(prices[i],minprice);
            profit=prices[i]-minprice;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};