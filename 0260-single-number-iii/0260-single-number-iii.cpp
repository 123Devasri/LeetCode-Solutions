class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x = 0;

        for(int num : nums)
            x ^= num;

        long long diff = x & (-x);

        int a = 0, b = 0;

        for(int num : nums)
        {
            if(num & diff)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};