class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<tuple<int,int>>time;
        for(int i=0;i<intervals.size();i++){
            time.push_back({intervals[i][1],intervals[i][0]});
        }
        sort(time.begin(),time.end());
        int e=get<0>(time[0]);int count=0;
        for(int i=1;i<time.size();i++){
            if(get<1>(time[i])>=e){
                e=get<0>(time[i]);
            }
            else {
                count+=1;
                }
        }
        return count;
    }
};