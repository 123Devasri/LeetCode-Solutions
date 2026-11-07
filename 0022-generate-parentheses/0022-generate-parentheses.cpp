class Solution {
public:
    void find(vector<string>&ans,int n,int open,int close,string sub){
        if(sub.size()==2*n){
           ans.push_back(sub);
           return;
        }
        if(open<n){
            sub.push_back('(');
            find(ans,n,open+1,close,sub);
            sub.pop_back();
        }
        if(close<open){
            sub.push_back(')');
            find(ans,n,open,close+1,sub);
            sub.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        find(ans,n,0,0,"");
        return ans;
    }
};