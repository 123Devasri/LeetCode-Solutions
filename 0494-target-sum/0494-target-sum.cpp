class Solution {
public:
    int rec(vector<int>&nums,int target,int sum,int ind){
        if(ind==nums.size()){
            return sum==target?1:0;
        }
        int add = rec(nums,target,sum+nums[ind],ind+1);
        int subtract = rec(nums,target,sum-nums[ind],ind+1);
        return add+subtract;      
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return rec(nums,target,0,0);
    }
};