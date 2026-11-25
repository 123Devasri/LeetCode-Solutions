class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<int>freq;
        for(auto p:mp){
            freq.push_back(p.second);
        }
        sort(freq.begin(),freq.end());int del=0;unordered_set<int>used;
        for(auto f:freq){
        while(f>0 && used.count(f)){
            f--;
            del+=1;
        }
        if(f>0)used.insert(f);
        }
        return del;
    }
};