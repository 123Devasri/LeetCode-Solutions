class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i,j=INT_MAX,k=INT_MAX;
        for(i=0;i<nums.size();i++){
            if(nums[i]<=j)j=nums[i];
            else if(nums[i]<=k)k=nums[i];
            else{
                return true;
            }
        }
        return false;
    }
};