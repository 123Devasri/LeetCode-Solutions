class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
          if(costs[i]<=coins){
            n+=1;
            coins-=costs[i];
          }
        }
        return n;
    }
};