class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;int i=0;string res;
        while(i<s.length()){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
            st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};