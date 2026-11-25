class Solution {
public:
    string reorganizeString(string s) {
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int maxfreq=0;
    for(auto p:mp){
        maxfreq=max(maxfreq,p.second);
    }
    if(maxfreq>(s.size()+1)/2){
        return "";
    }
    priority_queue<pair<int,char>>pq;
    for(auto p:mp){
        pq.push({p.second,p.first});
    }
    string ans="";
    while(pq.size()>=2){
        auto first=pq.top();
        pq.pop();
        auto second=pq.top();
        pq.pop();
        ans+=first.second;
        ans+=second.second;
        first.first--;second.first--;
        if(first.first>0)pq.push(first);
        if(second.first>0)pq.push(second);
    }
    if(!pq.empty()){
        ans+=pq.top().second;
    }
    return ans;
    }
};