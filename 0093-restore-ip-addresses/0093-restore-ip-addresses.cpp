class Solution {
public:
    void rec(vector<string>&ans,string &s,int ind,int cnt,string path){
        if(cnt==4){
            if(ind==s.size()){
                path.pop_back();
                ans.push_back(path);
            }
            return;
        }
        int remaining=s.size()-ind;
        int segments=4-cnt;
        if(remaining<segments||remaining>3*segments)return;
        for(int len=1;len<=3;len++){
            if(ind+len>s.size())break;
            string sub = s.substr(ind,len);
            if(len>1 && sub[0]=='0')break;
            if(stoi(sub)>255)continue;
            rec(ans,s,ind+len,cnt+1,path+sub+".");
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        if(s.size()<4||s.size()>12)return ans;
        rec(ans,s,0,0,"");
        return ans;
    }
};