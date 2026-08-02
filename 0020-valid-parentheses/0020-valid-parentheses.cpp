class Solution {
public:
    bool isValid(string s) {
        stack <char>st;int i=0;
        while(i<s.length()){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
             if(st.empty())return 0;
             if((st.top()=='(' && s[i]==')')||(st.top()=='{'&&s[i]=='}')||(st.top()=='['&&s[i]==']')){
                st.pop();
              }
              else{
                return 0;
              }
            }
            i++;
        }
        return st.empty();
    }
};