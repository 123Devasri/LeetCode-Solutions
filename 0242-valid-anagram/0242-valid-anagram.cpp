class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>sp;int i;
        for(char c:s){
            sp[c]++;
        }
        for(char c:t){
            sp[c]--;
            if(sp[c]<0){
                return false;
            }
        }
        return true;
    }
};