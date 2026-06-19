class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dup=-1,miss=-1,i;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                dup=nums[i];
            }
            else if (nums[i]>nums[i-1]+1){
                miss=nums[i-1]+1;
            }
        }
        if(nums[0]!=1){
            miss=1;
        }
        if(nums.back()!=nums.size()){
            miss=nums.size();
        }
        return {dup,miss};
    }
};