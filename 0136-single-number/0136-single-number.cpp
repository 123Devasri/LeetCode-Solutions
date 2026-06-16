class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int i,j=0;
       for(i=0;i<nums.size();i++){
         j^=nums[i];
       } 
       return j;
    }
};