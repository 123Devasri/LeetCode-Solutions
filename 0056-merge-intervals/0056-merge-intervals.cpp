class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=0;vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        while(i<intervals.size()){
            if(res.empty()){
                res.push_back(intervals[i]);
            }
            else if(intervals[i][0]>res.back()[1]){
                res.push_back(intervals[i]);
            }
            else{
                res.back()[1]=max(intervals[i][1],res.back()[1]);
            }
            i++;
            }
        return res;
    }
};