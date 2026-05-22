class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0,ans=0;int right=0;unordered_map<char,int>freq;
        for(right=0;right<s.length();right++){
           freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            ans=(ans>(right-left+1))?ans:(right-left+1);
        }
        return ans;
    }
};