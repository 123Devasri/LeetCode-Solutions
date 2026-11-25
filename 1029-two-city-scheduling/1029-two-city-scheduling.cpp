class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[](vector<int>&a,vector<int>&b){return (a[0]-a[1])<(b[0]-b[1]);});
        int tot=0,n=costs.size(),i;
        for(i=0;i<n/2;i++){
          tot+=costs[i][0];
        }
        for(i=n/2;i<n;i++){
            tot+=costs[i][1];
        }
        return tot;
    }
};