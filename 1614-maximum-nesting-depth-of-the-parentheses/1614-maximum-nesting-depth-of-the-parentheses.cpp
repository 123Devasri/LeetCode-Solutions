class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;int max=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
                max=(max>(int)st.size())?max:(int)st.size();
            }
            else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                st.pop();
            }
        }
        return max;
    }
};