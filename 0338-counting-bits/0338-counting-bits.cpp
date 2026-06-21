class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ar(n+1,0);
       for(int i = 1; i <= n; i++) {
            ar[i] = ar[i >> 1] + (i & 1);
        }
        return ar;
    }
};