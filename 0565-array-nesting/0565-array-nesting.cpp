class Solution {
public:
    int arrayNesting(vector<int>& nums) {

        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == -1)
                continue;

            int count = 0;
            int current = i;

            while (nums[current] != -1) {

                int next = nums[current];
                nums[current] = -1;
                current = next;
                count++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};