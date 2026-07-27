class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max=0,right,left=0,zerocnt=0;
        for(right=0;right<nums.size();right++){
            if(nums[right]==0){
                zerocnt++;
            }
            while(zerocnt>k){
                if(nums[left]==0)zerocnt--;
                left++;
            }
             max=(max>right-left+1)?max:right-left+1;
        }
        return max;
    }
};