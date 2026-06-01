class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int> freq(26,0);int left=0,cnt=0,maxfreq=0;
       for(int right=0;right<s.length();right++){
        freq[s[right]-'A']++;
        maxfreq=(maxfreq>(freq[s[right]-'A']))?maxfreq:(freq[s[right]-'A']);
        while((right-left+1)-maxfreq > k){
            freq[s[left]-'A']--;
            left++;
        }
        cnt=(cnt> (right-left+1))?cnt:(right-left+1);
       }
       return cnt;
    }
};