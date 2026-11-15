class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;vector<vector<int>>res;
        for(int i=0;i<points.size();i++){
            int d=(points[i][0]*points[i][0]) + (points[i][1]*points[i][1]); 
            pq.push({d,i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
           int ind=pq.top().second;
           res.push_back(points[ind]);
           pq.pop();
        }
        return res;
    }
};