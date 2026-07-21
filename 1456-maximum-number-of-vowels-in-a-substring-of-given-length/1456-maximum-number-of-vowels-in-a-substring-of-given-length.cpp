class Solution {
public:
    int maxVowels(string s, int k) {
        int i,sum=0,maxsum=0;
        for(i=0;i<s.length();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||
            tolower(s[i])=='o'||tolower(s[i])=='u'){
                sum+=1;
            }
            if(i>=k-1){
              maxsum=max(sum,maxsum);
              if(tolower(s[i-k+1])=='a'||tolower(s[i-k+1])=='e'||tolower(s[i-k+1])=='i'||
            tolower(s[i-k+1])=='o'||tolower(s[i-k+1])=='u'){
                        sum--;
              }
            }
        }
        return maxsum;
    }
};