class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<tuple<int,int,int>>jobs;
        for(int i=0;i<profit.size();i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        int n=profit.size();
        vector<int>starts;
        for(int i=0;i<n;i++){
            starts.push_back(get<0>(jobs[i]));
        }
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
           int end=get<1>(jobs[i]);
           int p=get<2>(jobs[i]);
           int next = lower_bound(starts.begin()+i+1,starts.end(),end)-starts.begin();
           int take = p + dp[next];
            int skip = dp[i+1];
            dp[i] = max(take, skip);
        }

        return dp[0];
    }
};