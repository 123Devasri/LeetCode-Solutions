class Solution {
public:
    int rec(vector<int>&freq){
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
            freq[i]--;
            cnt++;
            cnt+=rec(freq);
            freq[i]++;
            }
        }
        return cnt;
    }
    int numTilePossibilities(string tiles) {
        vector<int>freq(26,0);
        for(int i=0;i<tiles.size();i++){
            freq[tiles[i]-'A']++;
        }
        return rec(freq);
    }
};