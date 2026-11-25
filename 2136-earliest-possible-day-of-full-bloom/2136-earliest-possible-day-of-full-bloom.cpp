class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>pa;
        for(int i=0;i<plantTime.size();i++){
            pa.push_back({growTime[i],plantTime[i]});
        }
        sort(pa.rbegin(),pa.rend());
        int plant=0,ans=0;
        for(auto p:pa){
            plant+=p.second;
            ans=max(ans,plant+p.first);
        }
        return ans;
    }
};