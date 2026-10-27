class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i;stack<int>st;unordered_set<int>remove;
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    remove.insert(i);
                }
            }
        }
        while(!st.empty()){
            remove.insert(st.top());
            st.pop();
        }
        string ans="";
        for(i=0;i<s.size();i++){
            if(remove.find(i)==remove.end()){
                ans+=s[i];
            }
        }
        return ans;
    }
};