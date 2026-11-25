class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)return 0;
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){return a[1]<b[1];});int cnt=1;int arrow=points[0][1];
        for(int i=1;i<points.size();i++){
           if(points[i][0]>arrow){
            arrow=points[i][1];
            cnt+=1;
           }
        }
        return cnt;
    }
};