class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gs=g.size();int ss=s.size();
        sort(g.begin(),g.end());sort(s.begin(),s.end());
        int l=0,r=0;
        while(l<ss && r<gs){
            if(g[r]<=s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};