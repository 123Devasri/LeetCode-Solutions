class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0,maxpro=0,i=0,j=1;
        while(j<prices.size()){
            if(prices[i]<prices[j]){
                pro=prices[j]-prices[i];
                maxpro=max(maxpro,pro);
            }
            else{
                i=j;
            }
            j++;
        }
        return maxpro;
    }
};