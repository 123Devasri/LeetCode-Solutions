class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right,left=0,cnt=0;unordered_set <char> st;
        for(right=0;right<s.length();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]); 
            cnt=(cnt>(right-left+1))?cnt:right-left+1;
        }
        return cnt;
    }
};