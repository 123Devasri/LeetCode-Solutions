class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        if(needle.size()>haystack.size()){
            return -1;
        }
        for(i=0;i<=haystack.size()-needle.size();i++){
            j=0;
            while(j<needle.size()&&haystack[i+j]==needle[j]){
                j++;
            }
            if(j==needle.size()){
                return i;
            }
        }
        return -1;
    }
};