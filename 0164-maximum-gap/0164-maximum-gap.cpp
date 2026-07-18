class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int i,j=0;
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(i=nums.size()-1;i>0;i--){
           j= (nums[i]-nums[i-1])>j?nums[i]-nums[i-1]:j;
        }
        return j;
    }
};