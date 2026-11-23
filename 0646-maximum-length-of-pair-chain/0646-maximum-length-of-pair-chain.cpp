class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int>&b){return a[1]<b[1];});
        int cnt=0,lastend=INT_MIN;
        for(int i=0;i<pairs.size();i++){
          if(pairs[i][0]>lastend){
            lastend=pairs[i][1];
            cnt+=1;
        }
        }
        return cnt;
    }
};