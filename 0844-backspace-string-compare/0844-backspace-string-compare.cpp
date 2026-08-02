class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char>st;stack <char>ss;int i=0;char sp,tp;
        while(i<s.length()){
            if(s[i]=='#'&& !ss.empty()){
                ss.pop();
            }
            if(s[i]!='#'){
                ss.push(s[i]);
            }
            i++;
        }
        i=0;
        while(i<t.length()){
            if(t[i]=='#'&& !st.empty()){
                st.pop();
            }
            if(t[i]!='#'){
                st.push(t[i]);
            }
            i++;
        }
        while(!ss.empty()&&!st.empty()){
           sp=ss.top();tp=st.top();
           if(sp==tp){
            ss.pop();st.pop();
           }
           else{
            return 0;
           }
        }
        return ss.empty()&&st.empty();
    }
};