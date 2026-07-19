class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i,j=0;
        for(i=1;i<nums.size();i++){
              j=(nums[i]>nums[j])?i:j;
           }
        for(i=0;i<nums.size();i++){
         if(i==j)continue;
         if(nums[i]*2>nums[j])return -1;
          }
        return j;
    }
};