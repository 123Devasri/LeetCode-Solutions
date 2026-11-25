class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char c:tasks){
            freq[c-'A']++;
        }
        int maxfreq=*max_element(freq.begin(),freq.end());
        int maxcount=0;
        for(int f:freq){
            if(f==maxfreq)maxcount++;
        }
        return max((int)tasks.size(),(maxfreq-1)*(n+1)+maxcount);
    }
};